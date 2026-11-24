#include<iostream>
template<typename t, typename u>

// int max(int x, int y){
//     return (x>y)?x:y;
// }
// double max(double x, double y){
//     return (x<y)? x:y;
// }
// int main(){
//     std::cout<<max('1','2')<<"\n";
//     return 0;
// }

auto max(t x, u y){
    return (x>y)?x:y;
}

int main(){
    std::cout<<max('2',1.1)<<"\n";
}