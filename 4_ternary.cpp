// ternary Operator?: = replacement to an if/else statement
// condition?expresion1 : expersion2;


#include<iostream>

int main(){
    int n = 80;
    // n>=60? std::cout<<"Done"<<"\n" : std::cout<<"Work hard"<<"\n";
    // n%2? std::cout<<"ODD"<<"\n": std::cout<<"EVEN"<<"\n";
    std::cout<<(n%2?"ODD":"EVEN");
    return 0;
}
