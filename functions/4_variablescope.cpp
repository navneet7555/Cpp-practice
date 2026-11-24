// Local variable = declared inside a function or block{}
// Global variable = declared outside of all functions
// To use the global variable if local variable is alos there:
// use Scope resolution(::variable)

#include<iostream>
// int num=3;
// void prinnum(int num){
//     std::cout<<num<<'\n';
// }

void printnum();

int main(){

    int num=7;
    // printnum(num);

    printnum();

}

void printnum(){

    int num=8;
    std::cout<<"Num is: "<<num<<'\n';
}