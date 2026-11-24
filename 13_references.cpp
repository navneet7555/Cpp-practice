// just used for alias(nickname)
#include<iostream>
int main(){
    int a=7;
    int& ref=a;
    ref=8;
    
    int *ptr= &ref;
    std::cout<<*ptr<<"\n";
}

// Pointer
// void Increment(int *value){
//     (*value)++;
// }

// int main(){
//     int a=5;
//     Increment(&a);
//     std::cout<<a<<"\n";
// }

// // // Reference
// void Increment(int& value){
//     value++;
// }
// // referenced(nicknamed) a as value
// int main(){
//     int a=5;
//     Increment(a);
//     std::cout<<a<<"\n";
// }

// int main(){
//     int a=7;
//     int b=8;

//     int *ref=&a;
//     *ref=2;
//     ref = &b;
//     // *ref=1;

//     std::cout<<*ref<<"\n";
//     std::cout<<*ref<<"\n";
// }