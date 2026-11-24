#include<iostream>

void bakepizza(){
    std::cout<<"Here is your Pizza!\n";
}

void bakepizza(std::string topping1){
    std::cout<<"Here is Your "<<topping1<<" pizza!\n";
}

void bakepizza(std::string topping1, std::string topping2){
    std::cout<<"Here is Your "<<topping1<<" "<<topping2<<" pizza!\n";
}

int main(){
    bakepizza();
    bakepizza("Peperoni");
    bakepizza("Extra cheese", "chilli flakes");
}