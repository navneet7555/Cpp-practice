#include<iostream>

// int main(){
//     for(int i=1; i<=10; i++){
//         std::cout<<i<<"\n";
//     }
//     std::cout<<"Happy New Year!\n";
// }

// int main(){
//     int a= 8;
//     a++;
//     const char* string= "Hello";

//     for(int i=0; i<6; i++){
//         char c= string[i];
//         std::cout<<c<<"\n";

//     }
// }

int main(){
    int i=0;
    bool condition=true;
    for(;condition;){
        std::cout<<"Happy World\n";
        i++;
        if(i==5){
            condition=false;
        }
    }
}