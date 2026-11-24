// Pointers= A pointer is an interger/number which stores a memory address
// Used for managing and manipulating memory

#include<iostream>
int main(){
    double a=8;
    // double* pter= (double*)&a;
    double* pter= &a;
    double** ptr= &pter;
    // *ptr=10;
    std::cout<<&a<<"\n";
    std::cout<<*ptr<<"\n";

}