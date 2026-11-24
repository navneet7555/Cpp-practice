#include<iostream>
#include<vector>

// double getsum(double prices[], int size){
//     double total=0;
//     for(int i=0; i<size; i++){
//         total= total+prices[i];
//     }

//     return total;
//     // for(int n:prices[]){

//     }



// int main(){
//     double price[]= {45,78,99.9,54.89,78.06,87.78};
//     int size= sizeof(price)/sizeof(double);
//     double total= getsum(price, size);

//     // std::cout<<sizeof(price[0])<<"\n";

//     std::cout<<"Total: "<<total<<"\n";
// }

double getTotal(std::vector<double>& prices){
    double total= 0;
    for(double& p: prices){
        total= total+p;
    }
    return total;

}

int main(){
    std::vector<double> price= {45,78,99.9,54.89,78.06,87.78};
    double total=getTotal(price);

    std::cout<<"Total: "<<total<<"\n";

}