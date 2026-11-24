#include<iostream>
int main(){
    srand(time(NULL));
    // srand(5);
    int num= (rand()%6)+1;

    std::cout<<num<<"\n";
}