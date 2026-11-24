#include<iostream>
// #include<string>

// int main(){
//     bool asking=true;

//     while (asking){
//         using name = std::string;
//         name age;
//         std::cout<<"Enter your age: ";
//         std::cin>>age;
//         if(age== "q"){
//             break;
//         }
//         int agee= std::stoi(age);

//         if(agee>=18){
//             std::cout<<"You are an adult "<<age<<" years old"<<"\n";
//         }else if(agee<=0){
//             std::cout<<"You aren't born yet!"<<"\n";
//         }else if(agee>90){
//             std::cout<<"You are too Old!"<<"\n";
//         }
//         else{
//             std::cout<<"You are not Eligible!"<<"\n";
//         }
//     }
// }

// int main(){
//     int x=7;
//     // bool compare= x==7;
//     if(x)
//         std::cout<<"Happy World!\n";
//     // if(x==7) std::cout<<"Happy World"<<"\n";
// }

int main(){
    const char* ptr= "Hello";
    if(ptr){
        std::cout<<"Ptrsdfv\n";
    }else if(ptr=="Hello")
        std::cout<<"ptr is Hello\n";
    else{
        std::cout<<"Nullptr\n";
    }
}