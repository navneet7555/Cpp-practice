#include<iostream>
#include "log.h"

void log(const char* message){
    std::cout<<message<<"\n";
}

int main(){
    initlog();
    log("Happy World!");
}
