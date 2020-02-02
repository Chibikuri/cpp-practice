#include <iostream>

void inc_counter(int& counter){
    ++counter;
}

int main(){
    int a_count = 0;

    inc_counter(a_count);
    std::cout<<a_count<<std::endl;
    return (0);
}