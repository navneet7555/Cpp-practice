#include<iostream>
int main(){
    int rows;
    int columns;
    char symbols;

    std::cout<<"Enter the number of rows: ";
    std::cin>>rows;

    std::cout<<"Enter the number of columns: ";
    std::cin>>columns;

    std::cout<<"Enter the characters you want: ";
    std::cin>>symbols;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=columns; j++){
            std::cout<<symbols<<" ";
        }    
        std::cout<<"\n";
    }
}