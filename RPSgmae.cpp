#include<iostream>
#include<ctime>
#include<cctype>

char userchoice(){
    char player;
    do{
        std::cout<<"Enter your choice(Rock(R),Paper(P), Scissors(S)): ";
        std::cin>>player;
        player= std::toupper(player);
    }while(player != 'R' && player != 'P' && player!='S');

    return player;

}

char computerchoice(){
    srand(time(0));
    int num= rand()%3+1;

    switch(num){
        case 1: return 'R';
        case 2: return 'P';
        case 3: return 'S';
    }

    return 0;
}

void showchoice( char choice){
    switch(choice){
        case 'R':
        // case 'r':
        std::cout<<"Rock\n";
        break;

        case 'P': std::cout<<"Paper\n";
        break;

        case 'S': std::cout<<"Scissors\n";
        break;
    }
}

void choosewinner(char player, char computer){
    switch(player){
        case 'R': if(computer=='R'){
                    std::cout<<"It's a TIE\n";
                }else if(computer=='P'){
                    std::cout<<"Computer Wins\n";
                }else{
                    std::cout<<"Player Wins\n";
                }
        break;

        case 'P': if(computer=='P'){
                    std::cout<<"It's a TIE\n";
                }else if(computer=='R'){
                    std::cout<<"Player Wins\n";
                }else{
                    std::cout<<"Computer Wins\n";
                }
        break;

        case 'S': if(computer=='S'){
                    std::cout<<"It's a TIE\n";
                }else if(computer=='R'){
                    std::cout<<"Computer Wins\n";
                }else{
                    std::cout<<"Player Wins\n";
                }
    }
}


int main(){
    while(true){
        char player= userchoice();
        std::cout<<"Your choice: ";
        showchoice(player);

        char computer=computerchoice();
        std::cout<<"Computer's Choice: ";
        showchoice(computer);

        choosewinner(player, computer);
    }

}