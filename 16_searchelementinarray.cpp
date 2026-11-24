#include<iostream>
// #include<vector>

int indexnum(int array[],int element,int size){
    for(int i=0; i<size; i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){
    int num[]= {1,2,3,4,5,6,7,8,9,10};
    int size= sizeof(num)/sizeof(int);
    int mynum;    

    std::cout<<"Enter Element to search: ";
    std::cin>>mynum;

    int index= indexnum(num,mynum,size);

    if(index!=-1){
        std::cout<<"Num Found at index: "<<index<<"\nNum is : "<<num[index]<<"\n";
    }else{
        std::cout<<"Not Found\n";
    }
}

// int indexnum(std::vector<int>& nums, int mynum){
//     for(int n: nums){
//         if(n== mynum){
//             return n;
//         }
//     }
//     return -1;
// }

// int main(){
//     std::vector<int> num= {1,2,3,4,5,6,7,8,9,10};
//     int mynum;

//     std::cout<<"Enter a element to search: ";
//     std::cin>>mynum;

//     int nums=indexnum(num, mynum);

//     if(nums!=-1){
//         std::cout<<"Element searched is: "<< nums<<"\n";
//     }else{
//         std::cout<<"Not Found!\n";
//     }

//     return 0;
// }