#include<iostream>
int sumoddDigit(std::string cardnumber){
    int sum=0;
    for(int i=cardnumber.size()-1; i>=0; i-=2){
        sum+=cardnumber[i]-'0';
    };
    return sum;
}

int getdigit(const int number){
    return number%10 + (number/10%10);
}

int sumEvendigit(std::string cardnumber){
    int sum=0;
    for(int i=cardnumber.size()-2; i>=0; i-=2){
        sum+=getdigit((cardnumber[i]-'0')*2);
    }
    return sum;
}

int main(){
    std::string cardnumber;
    int result=0;

    std::cout<<"Enter a card Number: ";
    std::cin>>cardnumber;

    result=sumoddDigit(cardnumber) + sumEvendigit(cardnumber);

    if(result%10==0){
        std::cout<<"Cardnumber is valid.\n";
    }else{
        std::cout<<"Cardnumber Not Valid\n";
    }

}