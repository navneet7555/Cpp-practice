#include<iostream>

// class in always private unless stated public
// struct is always public unless stated private

struct vec2{
    float x,y;

    void add(vec2& other){
    x+=other.x;
    y+=other.y;
    }

};

int main(){
    vec2 vc;
    vc.x=6;
    vc.y=2;
    vc.add(vc);


}