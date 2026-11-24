// Dynamic memory= Memory that is allocated after the program is already
//                 compiled & running.
//  Use the 'new' operator to allocate memory in the heap rather than the stack

// Useful when we don't know how much memory we will need. Makes our programs
// more flexible, especially when accepting user input
#include<iostream>
#include<cctype>

int main(){
    // int *pNum=NULL;

    // pNum= new int;
    // *pNum= 55;

    // std::cout<<*pNum<<"\n";
    // delete pNum;

    char *grades= NULL;

    int size;
    std::cout<<"How many grades to enter in?: ";
    std::cin>>size;

    grades= new char[size];

    for(int i=0; i<size; i++){
        std::cout<<"Grade at "<<i+1<<": ";
        std::cin>>grades[i];

        // grades[i]= std::toupper(static_cast<unsigned char>(grades[i]));
        grades[i]= std::toupper(grades[i]);
    }


    for(int i=0; i<size; i++){
        std::cout<<grades[i]<<"\n";
    }

    delete[] grades;
    grades = nullptr;

}