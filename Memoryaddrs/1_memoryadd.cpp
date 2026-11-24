#include<iostream>

// Memory Address= A location in memory where data is stored
//  A memory address can be accessed with &(address-of operator)

int main(){
    std::string name="Navneet";
    int age= 23;
    bool professional= true;

    std::cout<<&name<<"\n";
}