#include<iostream>

// void countCalls() {
//     static int counter = 0; // Initialized only once
//     counter++;
//     std::cout << "Called " << counter << " times\n";
// }

// int main() {
//     countCalls(); // Output: Called 1 times
//     countCalls(); // Output: Called 2 times
//     countCalls(); // Output: Called 3 times
// }

struct Entity{
    static int x,y;

    void display(){
    std::cout<<x << ", "<< y<<"\n";
}
};

// void display(int x, int y){
//     std::cout<<x << ", "<< y<<"\n";
// }

int Entity::x;
int Entity::y;

int main(){
    Entity e;
    Entity::x=2;
    Entity::y=3;

    // Entity e1= {7,8};
    Entity e1;
    Entity::x=7;
    Entity::y=8;

    // display(e1.x, e1.y);
    e.display();
    e1.display();
    


}