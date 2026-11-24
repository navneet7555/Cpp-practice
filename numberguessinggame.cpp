#include<iostream>
int main(){
    srand(time(NULL));
    int num;
    int guess;
    int tries=0;

    guess=(rand()%100)+1;

    std::cout<<"*********Number Guessing Game***************\n";
    do{
        // guess=(rand()%100)+1;

        std::cout<<"Enter your Guess(1-100): ";
        std::cin>>num;


        if(num>guess){
            std::cout<<"You guessed more!\n";
        }else if(num<guess){
            std::cout<<"You guessed less!\n";
        }else{
            std::cout<<"No. of tries "<<tries<<"\n";
        }

        std::cout<<"The guess was "<<guess<<"\n";
        tries++;


         
    }while(num!=guess);

    
    std::cout<<"You nailed it!";
    return 0;
}