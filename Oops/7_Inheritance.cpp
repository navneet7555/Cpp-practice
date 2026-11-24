#include<iostream>
#include<cmath>
// Inheritance=A class can recieve attributes and methods from another class
//               Children classes inherit from a parent class
//            Helps to resuse similar code found within multiple classes
// class Entity{
//     public:
//     float X,Y;

//     // Constructor
//     // Entity(): X(0), Y(0) {}

//     void move(float xa, float yb){
//         X+=xa;
//         Y+=yb;
//     }
// };

// class Player: public Entity{
//     public:
//     const char *name;
//     void displayname(const char *name){
//         std::cout<<name<<"\n";
//     }
// };

// int main(){
//     // std::cout<<sizeof(Player)<<"\n";
//     Player player;
//     player.displayname("Player1");
//     player.move(1,2);
    
//     std::cout<<"X:"<<player.X<<",Y:"<<player.Y<<"\n";

// }

// -------------------------------------------------------------

// class Animal{
//     public:
//     bool is_alive= true;

//     void eat(){
//         std::cout<<"The Animal can Eat\n";
//     }
// };

// class Dog:public Animal{
//     public:
//     void speak(){
//         std::cout<<"The Dog Goes Woof!\n";
//     }
// };

// class Cat:public Dog{
//     public:
//     void speaks(){
//         std::cout<<"The Cat Goes MEOW!\n";
//     }
// };

// int main(){
//     Cat animal;
//     animal.eat();
//     animal.speak();
//     animal.speaks();
// }

// --------------------------------------------------------

class Shape{
    public:
    double area;
    double volume;
};

class Cube:public Shape{
    public:
        double radius;
    Cube(double radi){
        radius=radi;
        area= 6*(radius*radius);
        volume= std::pow(radius,3);
    }
};

class Sphere:public Shape{
    public:
    double radius;
    Sphere(double sidee){
        radius= sidee;
        area=4*3.14*pow(sidee,2);
        volume=(4/3.0)*3.14*pow(radius,3);
    }
};

int main(){
    Cube cube(10);
    Sphere sphere(5);

    std::cout<<cube.volume<<"\n";
    std::cout<<sphere.area<<"\n";
    
}