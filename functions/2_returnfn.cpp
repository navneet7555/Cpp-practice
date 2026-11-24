#include<iostream>

// float square(float lenght){
//     float area= lenght*lenght;
//     return area;
// }

// double cube(float side){
//     double volume= side*side*side;
//     return volume;
// }


// int main(){
//     double length= 7.8f;

//     double area= square(length);

//     double volume= cube(length);

//     std::cout<<"Area: "<<area<<"cm^2"<<"\n";
//     std::cout<<"Volume of Cube: "<<volume<< "\n";

// }


std::string fullnam(std::string name1, std::string name2){
    return name1+ " "+ name2;
}

int main(){
    std::string firstname= "Navneet";
    std::string lastname= "Pandey"; 

    std::string fullname= fullnam(firstname, lastname);


    std::cout<<"Your first name is: "<<fullname<<"\n";
}