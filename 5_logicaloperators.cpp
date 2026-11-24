// && = check if two conditions are true
// || = check if either one is two
// ! = reverses the logical state of its operand

#include<iostream>
int main(){
    int temp;
    bool sunny=false;
    std::cout<<"Enter the atemperature: ";
    std::cin>>temp;

    if(temp>0 && temp<=30){
        std::cout<<"The temperature is good"<<"\n";
    }else if(temp<0 || temp>30){
        std::cout<<"The temp is not Good"<<"\n";
    }

    if(!sunny){
        std::cout<<"It's Cloudy Outside!";
    }else{
        std::cout<<"It's Sunny Outside";
    }
    
}