#include<iostream>
void swap(std::string& a, std::string& b){
    std::string temp;
    temp=a;
    a=b;
    b=temp;

    // std::cout<<"X: "<<a<<"\n"<<"Y: "<<b<<"\n";

}

int main(){
    std::string x= "Kool-aid";
    std::string y= "Water";

    // std::string temp=x;
    // x=y;
    // y=temp;
    swap(x,y);


    std::cout<<"X: "<<x<<"\n"<<"Y: "<<y<<"\n";
} 