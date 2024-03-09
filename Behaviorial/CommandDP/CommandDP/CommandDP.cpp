#include <string>
#include <iostream>
#include <stack>
#include <ctime>
#include <cstdlib>

struct Character{
    int x;
    int y;
    std::string name;
    Character(std::string _name) : name(_name){
    }
    void move(int _x, int _y){
        x = _x;
        y = _y;
    }
};

class Command{
    public:
    virtual ~Command(){}
    virtual void execute() = 0;
    virtual void undo() = 0;
};

class MoveCommand: public Command{
    Character* characher_;
public:
    MoveCommand(Character* characher) :characher_{ characher }
    {}
    void execute()
    {
        characher_->x = rand() %4;
        characher_->y = rand() %4;
        characher_->move(characher_->x, characher_->y);
        std::cout << characher_->name << " moved " << characher_->x << "," << characher_->y << std::endl;
    }
    void undo(){
        //characher_->move(characher_->x, characher_->y);
        std::cout << characher_->name << " undo " << -characher_->x << "," << -characher_->y << std::endl;
    }
};


class Invoker {
    std::stack<Command*> command_stack_;
public:

    void pressCommand(Command* command)
    {
        command->execute();
        command_stack_.push(command);
    }

    void pressUndoCommand()
    {
        command_stack_.top()->undo();
    }


};



int main(){
    srand(time(NULL));

    Character *character = new Character("mike");;
    Command* c1 = new MoveCommand(character);
    Invoker* inv = new Invoker();
    inv->pressCommand(c1);
    inv->pressUndoCommand();
    //command_queue.push_back(m1);
    //Move* m2 = new Move;
    //command_queue.push_back(m2);
    //Move* m3 = new Move;
    //command_queue.push_back(m3);
    //Move* m4 = new Move;
    //command_queue.push_back(m4);

    //for(int i=0; i < command_queue.size(); i++){
    //    command_queue[i]->execute(mike); 
    //}

    //for(int i=command_queue.size()-1; i > -1; i--){
    //    command_queue[i]->undo(mike); 
    //}

    //// And of course some cleanup...
    //for(int i=0; i < command_queue.size(); i++){
    //    delete command_queue[i];
    //}

    //return 0;
}