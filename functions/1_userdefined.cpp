#include<iostream>

// void happybirthday(std::string name, int age){
//     std::cout<<"HAPPY BIRTHDAY "<< name <<"\n";
//     std::cout<<"You are "<<age<<" years old"<<"\n";
//     std::cout<<"Enjoy Your Day\n\n";
// }

// int main(){

//     std::string name = "Navneet Pandey";

//     int age=22;
//     int age=16;

//     happybirthday(name,age);
//     happybirthday(name,age);
// }

int multiply(int a, int b){
    return a*b;
}

void mulandreturn(int a, int b){
    int result= multiply(a, b);
    std::cout<<result<<"\n";

}

int main(){

    mulandreturn(2,3);
    mulandreturn(7,8);
    
}