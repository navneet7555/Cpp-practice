#include<iostream>
#include<cmath>
int main(){
    int a;
    int b;
    std::cout<<"Enter side A(Perpendicular): ";
    std::cin>>a;

    std::cout<<"Enter side B(Base): ";
    std::cin>>b;

    double h= sqrt(pow(a,2)+pow(b,2));
    // double h= hypot(a,b);

    std::cout<<"The Hypotenuse is: "<<h<<"\n";
}