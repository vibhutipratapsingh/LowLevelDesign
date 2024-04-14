// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include <set>
using namespace std;

//You are given two 0 - indexed integer permutations A and B of length n.
//
//A prefix common array of A and B is an array C such that C[i] is equal to the count of numbers that are present at or before the index i in both A and B.
//
//Return the prefix common array of A and B.
//
//A sequence of n integers is called a permutation if it contains all integers from 1 to n exactly once.
//
//
//
//Example 1:
//
//Input: A = [1, 3, 2, 4], B = [3, 1, 2, 4]
//Output : [0, 2, 3, 4]
//Explanation : At i = 0 : no number is common, so C[0] = 0.
//At i = 1 : 1 and 3 are common in A and B, so C[1] = 2.
//At i = 2 : 1, 2, and 3 are common in A and B, so C[2] = 3.
//At i = 3 : 1, 2, 3, and 4 are common in A and B, so C[3] = 4.
//Example 2 :
//
//    Input : A = [2, 3, 1], B = [3, 1, 2]
//    Output : [0, 1, 3]
//    Explanation : At i = 0 : no number is common, so C[0] = 0.
//    At i = 1 : only 3 is common in A and B, so C[1] = 1.
//    At i = 2 : 1, 2, and 3 are common in A and B, so C[2] = 3.
int main()
{
    vector<int> A = { 2,3,1};
    vector<int> B = { 3, 1, 2 };
    set<int> ASet;
    set<int> BSet;
    
    int n = A.size();
    vector<int> res(n,0);
    for (int i = 0; i < n; i++)
    {
        if (A[i] == B[i])
        {
            if (i == 0)
            {
                res[i] = 1;
            }
            else
            {
                res[i] = res[i - 1] + 1;
            }
        }
        else 
        {

            
            ASet.insert(A[i]);
            BSet.insert(B[i]);
            int count = 0;
            for (int j = 0; j < ASet.size(); j++)
            {
                auto af = ASet.find(B[j]);
                auto bf = BSet.find(A[j]);
                
                if (af != ASet.end() && bf != BSet.end())
                {
                    count++;
                }
                res[i] = count;
            }
        }
        
    }
    //res = { 0,1,3 };
    for (auto i : res)
    {
        cout << i << " ";
    }
}
