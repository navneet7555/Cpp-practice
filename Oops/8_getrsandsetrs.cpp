// Abstraction= hiding unnecessary data from outside a class
// getter= function that makes a private attribute READABLE
// setter= function that makes a private attribute WRITEABLE

#include<iostream>
class Stove{
     private:
     int temperature=0;

    //  public:
    //  Stove(int temperature){
    //     setTemperature(temperature);
    //  }


     public:
     int getTemperature(){
        return temperature;
     }

     void setTemperature(int temp){
        if(temp<0){
            std::cout<<"Not allowed\n";
            return;
        }else if(temp>=30){
            std::cout<<"Not Allowed!\n";
            return;
        }else{
            temperature=temp;
        }
     }


};

int main(){
    Stove stove;
    // stove.temperature=10;
    stove.setTemperature(10);
    std::cout<<"Current Temperature: "<<stove.getTemperature()<<"\n";

    stove.setTemperature(35);
    std::cout<<"Current Temperature: "<<stove.getTemperature()<<"\n";
}