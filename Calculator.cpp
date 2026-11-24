#include<iostream>
#include<cmath>

int main(){
    char op;
    std::cout<<"Enter an operator('+,-,/,*.%'): ";
    std::cin>>op;

    double num1;
    std::cout<<"Enter #num1: ";
    std::cin>>num1;

    double num2;
    std::cout<<"Enter #num2: ";
    std::cin>>num2;

    double result;

    switch(op){
        case '+':
        result= num1+num2;
        std::cout<<result<<'\n';
        break;

        case '-':
        result= (num1>num2)?num1-num2:num2-num1;
        std::cout<<result<<'\n';
        break;

        case '*':
        result= num1*num2;
        std::cout<<result<<"\n";
        break;

        case '/':
        result= (num1>num2)?num1/num2:num2/num1;
        std::cout<<result<<"\n";
        break;

        case '%':
        result= (num1>num2)?(int)num1%(int)num2:(int)num2%(int)num1;
        // result= (num1>num2)? std::fmod(num1,num2):std::fmod(num2,num1);

        std::cout<<result<<'\n';

        default:
        std::cout<<"Invalid Operator!";
    }

}