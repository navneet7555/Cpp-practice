#include<iostream>
int main(){
    std::string cars[][3]= {{"Mustang", "Ford ESC", "F150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challlenger", "Durango", "Ram 1500"},
                        {"sdfv", "sfrge", "wefw"}};

    int rows= sizeof(cars)/sizeof(cars[0]);
    int columns= sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            std::cout<<cars[i][j]<<"\n";
        }
    }


    // std::cout<< columns<<"\n";
    return 0;
}