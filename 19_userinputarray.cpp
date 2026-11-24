#include<iostream>
#include<cctype>

int main(){
    std::string foods[5];
    int size= sizeof(foods)/sizeof(foods[0]);
    std::string temp;


    for(int i=0; i<size; i++){
        std::cout<<"Enter a food you like "<<i+1<<": ";
        std::getline(std::cin, temp);
        if(temp=="Q"||temp=="q"|| temp.empty()){
            break;
        }else{
            foods[i]= temp;
        }
    }
    std::cout<<"You liked the following Food: "<<"\n";

    // for(std::string food: foods){
    //     std::cout<<food<<"\n";
    // }

    for(int i=0; i<size && !foods[i].empty(); i++){
        std::cout<<foods[i]<<"\n";
    }
}