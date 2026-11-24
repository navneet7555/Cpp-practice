#include<iostream>
// int main(){
//     std::string name;

//     while(name.empty()){
//         std::cout<<"Enter your name: ";
//         std::getline(std::cin, name);
//     }

//     std::cout<<"Hello "<<name<<"\n";
// }

int main(){
    int i=0;
    while(i<5){
        std::cout<<"Happy World\n";
        i++;
    }
}

// #include<iostream>

// do while loop = do some block of code first,
//                 then repeat again if condition is true
int main(){
    int number;

    do{
        std::cout<<"Enter a number: ";
        std::cin>>number;
    }while(number<=0);

    std::cout<<"The number is "<< number<<"\n";
}