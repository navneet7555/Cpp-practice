#include<iostream>
// using namespace std;
int main(){
    std::string name;

    std::cout<<"Enter Your name:  ";
    // cin>>name;
    std::getline(std::cin>>std::ws, name);

    std::cout<<"Your name is "<<name<<"\n";
}