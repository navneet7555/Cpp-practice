#include<iostream>
// Recursion= A programming technique where a function invokes itself 
//            from within
// break a complex ceoncept into a repeatab;e single steps

// (iterative vs recursive)

// Advantages= less code and is cleaner
//             useful for sorting and searching an algorithm

// Disadvantages= uses more memory 
            //  is slower

// void walk(int step){
//     // Iterative approach
//     // for(int i=0; i<step; i++){
//     //     std::cout<<"You take "<<i+1<<" Step\n";

//     // }

//     // Recursive approach
//     if(step>0){
//         std::cout<<"You take a Step\n";
//         walk(step-1);
//     }
// }

// int main(){
//     walk(10);

//     return 0;
// }

int fact(int num){
    int facte=1;
    // for(int i=num; i>0; i--){
    //     fact= fact*i;
    // }
    // return fact;
    
    // while(num>0){
    //     fact*=num;
    //     num--;
    // }
    // return fact;

    if(num>0){
        int no=num*fact(num-1);
        return no;
    }else{
        return 1;
    }
}

int main(){
    int n=7;

    // int factorial=fact(n);

    std::cout<<"Fact is: "<<fact(n)<<"\n";

}