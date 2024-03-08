// prototypeDP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



class Shape {
public:
    virtual Shape* clone() const = 0; 
    virtual void draw() const = 0;   
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    Circle(const Circle& obj):radius{ obj.radius }
    {
        std::cout << "Copy Constructor of Circle"<<std::endl;
    }

    Shape* clone() const override {
        return new Circle(*this);
    }

    void draw() const override {
        std::cout << "Drawing a circle with radius " << radius << std::endl;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}
    
    Rectangle(const Rectangle& obj) :width{ obj.width }, height{ obj.height }
    {
        std::cout << "Copy Constructor of Rectangle"<<std::endl;
    }

    Shape* clone() const override {
        return new Rectangle(*this);
    }

    void draw() const override {
        std::cout << "Drawing a rectangle with width " << width << " and height " << height << std::endl;
    }
};


int main()
{
    Circle circlePrototype(5.0);
    Rectangle rectanglePrototype(4.0, 6.0);
    Shape* shape1 = circlePrototype.clone();
    Shape* shape2 = rectanglePrototype.clone();
}
