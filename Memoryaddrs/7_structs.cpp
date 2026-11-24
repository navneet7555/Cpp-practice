#include<iostream>
// structs= A structure that group related variables under one name
//       structs can contain many different data types(string,)
//       variables in a struct are known as 'members'
//       Members can be access with. "class memeber access Operators".

// struct student{
//     std::string name;
//     double gpa;
//     bool enrolled;
// };

// int main(){
//     student student1;
//     student1.name= "Navneet";
//     student1.gpa= 8.5;
//     student1.enrolled= true;

//     std::cout<<student1.name<<"\n";
//     std::cout<<student1.gpa<<"\n";
//     std::cout<<student1.enrolled<<"\n";

// }

// passing of pass structs as arguments

struct Car{
    std::string model;
    int year;
    std::string color;
};

void display(Car &car);
void pricar(Car &car,std::string color);

int main(){
    Car car1;
    car1.model= "Bugati";
    car1.year= 2026;
    car1.color= "Red";

    Car car2;

    car2.model= "Lamborgini";
    car2.year= 2025;
    car2.color= "White";

    // std::cout<<&car1<<"\n";
    // std::cout<<&car2<<"\n";

    pricar(car1, "Silver");
    pricar(car1, "Gold");


    display(car1);
    display(car2);

}

void display(Car &car){
    std::cout<<&car<<"\n";
    std::cout<<car.model<<"\n";
    std::cout<<car.year<<"\n";
    std::cout<<car.color<<"\n";
}

void pricar(Car &car,std::string color){
    car.color=color;
}