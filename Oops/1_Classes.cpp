#include<iostream>
// Object= A collection of attribures and methods
    // They can have characteristics and could perform actions
    // can be used to mimic rreal world items(ex. Phone,Book,Dog)
    // Created from a class which acts as a "blue-print".


// class player{
// public:
//     double x,y;
//     double speed;

//     void move(double xa, double ya){
//     x+=xa*speed;
//     y+= ya*speed;
// }
// };

// // void move(player khiladi, double xa, double ya){
// //     khiladi.x+=xa*khiladi.speed;
// //     khiladi.y+= ya*khiladi.speed;
// // }

// int main(){
//     player khiladi;
//     khiladi.x=7;
//     khiladi.y=7;
//     khiladi.speed=5;
//     // move(khiladi, 1, 1.1);
//     khiladi.move(1,1.1);

//     player enemy;
//     enemy.x=8;
//     enemy.y=8;
//     enemy.speed=4;
//     enemy.move(0.8,1);

//     std::cout<<"position of khiladi:: X: "<<khiladi.x<< ", Y="<<khiladi.y<<"\n";
//     std::cout<<"position of Enemy:: X: "<<enemy.x<< ", Y="<<enemy.y<<"\n";


// }

class Human{
    public:
    std::string name;
    int age;
    std::string occupation;

    void eat(){
        std::cout<<"This person can Eat.\n";
    }

    void drink(){
        std::cout<<"This person can Drink.\n";
    }

    void sleep(){
        std::cout<<"This person can Sleep.\n";
    }
};

int main(){
    Human human1;
    human1.name= "Navneet";
    human1.age= 23;
    human1.occupation= "Robotics Engineer";

    human1.eat();

    // std::cout<<human1.name<<"\n";
}