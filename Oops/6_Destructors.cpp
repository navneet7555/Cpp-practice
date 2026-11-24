#include<iostream>
class Entity{
    public:
    float X, Y;

    Entity(){
        X=7;
        Y=8;
        std::cout<<std::endl<<"Constructor Created\n"<<std::endl;
    }

    ~Entity(){
        std::cout<<"Destructor Created\n"<<std::endl;
    }

    void display(){
        std::cout<<"X:"<<Y<<",Y:"<<Y<<"\n";
    }
};

void Function(){
    Entity e;
    e.display();
    e.~Entity();
}

int main(){
    Function();
}