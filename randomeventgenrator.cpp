#include<iostream>
int main(){
    srand(time(0));

    int num= (rand()%5)+1;

    switch(num){
        case 1: std::cout<<"You won a bumper sticker\n";
                break;
        case 2:std::cout<<"You won a t-shirt\n";
                break;

        case 3:std::cout<<"You won a video game\n";
                break;

        case 4:std::cout<<"You won a playstation\n";
                break;
                
        case 5:std::cout<<"You won a bike\n";
                break;
    }
}