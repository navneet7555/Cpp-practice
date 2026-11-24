// Constructor= Special method that is automatically called when an object
//              is instantiated
//      Useful for assigning values to attributes as arguments

#include<iostream>

class Entity{
    public:

    float x,y;

    // // Default Constructor
    // Entity(){
    //     x=1;
    //     y=2;
    // }

    // Parameterized Constructor
    Entity(float X, float Y){
        x=X;
        y=Y;
    }
    // Entity(float X, float Y): x(X), y(Y) {};


    // void Init(){
    //     x=0;
    //     y=0;
    // }

    void display(){
        std::cout<<"X:"<<x<<",Y:"<<y<<"\n";
    }
};

int main(){
    // Used for Parametrized Constructor
    Entity e(2,5);
    // // Used with default Constructor
    // Entity e;
    // e.Init();
    e.display();

    Entity e1(7,8);
    // e1.Init();
    e1.display();
}

// class Log{
//     // private:
//     // Log () {}
//     public:
//     // Log() = delete;
//     static void write(){
//         std::cout<<"Hello\n";
//     }
// };

// int main(){
//     // To access without an object, the methods should be static
//     Log::write();
//     // Log l;
//     // l.write();
// }


// ________________Overloading Constructors_____________________
class Pizza{
    public:
    std::string topping1;
    std::string topping2;


    Pizza(std::string topping){
        this->topping1=topping;
    }

    Pizza(std::string topping, std::string toppingg){
        this->topping1=topping;
        this->topping2= toppingg;
    }

};

int main(){
    Pizza pizza1("pepperoni");
    Pizza pizza2("Extra cheese", "Chilli flakes");


    std::cout<<"Your Pizza with "<<pizza1.topping1<<"\n";
    std::cout<<"Your Pizza with "<<pizza2.topping1<<" and "<<pizza2.topping2<<"\n";
}