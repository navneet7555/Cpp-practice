#include<iostream>
void intro(const std::string &name,const int &age){
    // name= "The Supreme";
    // age= 26;
    std::cout<<name<<"\n";
    std::cout<<age<<"\n";

}

int main(){
    std::string name= "Navneet";
    int age=23;

    intro(name, age);

}