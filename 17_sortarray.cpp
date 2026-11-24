// Bubble sort
#include<iostream>
void sortarray(int array[], int size){
    int temp;
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(array[j]>array[j+1]){
                temp= array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

int main(){
    int array[]={10,1,9,2,6,4,8,5,7,3};
    int size= sizeof(array)/sizeof(int);

    sortarray(array, size);

    for(int element: array){
        std::cout<<element<<" ";
    }
}
