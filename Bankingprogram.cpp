#include<iostream>
#include<iomanip>

void showbalance(double balance){
    std::cout<<"Your current balance is: "<<std::setprecision(2)<<std::fixed<<balance<<"\n";
    // std::cin>>balance;
}
void deposit(double& balance){
    double amount=0;

    std::cout<<"Enter Amount to be deposited: ";
    std::cin>>amount;

    if(amount<=0){
        std::cout<<"Deposit failed due to low balance amount!\n";
    }else{
        balance= balance+amount;
        std::cout<<"You Deposited Rs "<<amount<<'\n';
    }

    showbalance(balance);
}
void withdraw(double& balance){
    double amount=0;
    std::cout<<"Enter the amount You want to withdraw: ";
    std::cin>>amount;
    if(amount<=0 || amount>balance){
        std::cout<<"Amount is not Valid!";
    }else{
        balance= balance-amount;
        std::cout<<"Withdrawn Successful.\n";
    }
    showbalance(balance);
}

int main(){
    int choice=0;
    double balance=0;
    // double amount=0;

    do{
        std::cout<<"1. Show Balance\n";
        std::cout<<"2. Deposit\n";
        std::cout<<"3. Withdraw\n";
        std::cout<<"4. Exit\n";

        std::cout<<"Enter your choice: ";
        std::cin>>choice;

        switch(choice){
            case 1: 
            showbalance(balance);
            break;

            case 2: 
            deposit(balance);
            break;

            case 3: 
            withdraw(balance);
            break;

            case 4:
            std::cout<<"Thanks For Visiting!\n";
            break;
            return 0;

            default:
            std::cout<<"Invalid Input!\n";
            break;
            return 0;
        }

    }while(choice!=4);
}