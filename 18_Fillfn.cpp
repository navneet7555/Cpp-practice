// Fill()= Fills a range of elements with a specified value
//         fill(ebgin, end, value)

#include<iostream>
// #include<algorithm>

int main(){
    // std::string food[10]={"abd", "ewf","dfw","weefw","wdf","qer","cewr","were","cdw", "qas"};
    std::string foods[50];

    fill(foods,foods+(50/2),"Pizza");
    fill(foods+(20/2), foods+50, "Burger");


    for(std::string& food: foods){
        std::cout<<food<<"\n";
    }
}