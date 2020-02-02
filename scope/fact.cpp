#include<iostream>
#include<assert.h>

int fact(int number){
    assert(number>=0);
    if(number == 0){
        return 1;
    }else{
        return number*fact(number-1);
    }
}

int main(){
    int fact4; // factorial of 4
    fact4 = fact(4);
    std::cout<<fact4<<std::endl;
    return 0;
}