// practice of list
#include<iostream>

float data[3];

int main(){
    for(int i; i <= 3; i++){
        data[i] = i;
    }
    std::cout<<"data is "<<data[1]<<"\n";
    return (0);
}