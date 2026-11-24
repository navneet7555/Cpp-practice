#include<iostream>

int main(){
    for(int i=0; i<5; i++){
        if(i%2==0){
            continue;
            // break;
            // return 0;
        }
        std::cout<<"Happy world\n";
        std::cout<<i<<'\n';
    }
    std::cin.get();
}