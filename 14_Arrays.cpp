// Array: A data structure that can hold multiple values
//        Values are accessed by an index number
//        "Kind of like a variable that holds multiple values"
#include<iostream>
#include<vector>

// int main(){
//     // std::string car[7];
//     // // std::string car[]= {"Carvette", "Mustang", "Ferrai"};
//     // car[0]= "Defender";
    
//     // std::cout<<car[0]<<"\n";
//     // std::cout<<car[1]<<"\n";
//     // std::cout<<car[2]<<"\n";

//     int num[]= {1,2,3,4,5,6,7,8,9};
//     num[9]= 10;
//     // std::cout<<num[4]<<"\n";

//     std::cout<<sizeof(int)<<"\n";
//     std::cout<<sizeof(num)<<"\n";
//     // std::cout<<"Total Elements: "<<sizeof(num)/sizeof(int)<<"\n";
//     // For  finding the no. of elements= sizeof(variable)/sizeof(data type)


// }

int main(){
    std::vector<int> num = {1,2,3,4,5,6,7,8,9};
    // std::cout<<sizeof(num)<<'\n';
    std::cout<<"Count of Elements: "<<num.size()<<"\n";

    // num.push_back(10);
    // num.insert(num.begin()+4, 99);
    std::cout<<"New Count: "<<num.size()<<"\n";

    // num[4]=1;
    
// Foreeach loop
    for(int n: num){
        std::cout<<n<<" ";
    }

}