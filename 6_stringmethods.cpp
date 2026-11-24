// .clear()= to clear the input
// .append()= to append string to another string
// name.append("String here")
// .lenght()= length of the string
// .insert(index, "string to insert")= insert the string at given index
// .empty()= check if its empty
// .at(index)= check string at given index
// .find("string")= finds the string in the given string
// .erase(start index, number of string to erase)

#include<iostream>
int main(){
    using std::string;
    string name;
    std::cout<<"Enter Your name: ";
    std::getline(std::cin, name);
    // std::cin>>name;

    // To find the given string
    std::cout<<name.find("N")<<'\n';

    // if(name.find("N")!= std::string::npos){
    //     std::cout<<"Found It!\n";
    // }else{
    //     std::cout<<"Not Found!\n";
    // }

    // To erase string from given range
    std::cout<<name.erase(2,4)<<"\n";

    // To insert any string at required index
    std::cout<<name.insert(0,"@")<<"\n";

    // To get the string at given index
    std::cout<<name.at(1)<<"\n";

    if(name.length()>12){
        std::cout<<"The name can't exceed 12 characters."<<"\n";
    }else if(name.empty()){
        std::cout<<"You didn't Enter your name!"<<'\n';
    }else{
        name.append("@gmail.com");
        std::cout<<"Your username is "<<name;
    }
}