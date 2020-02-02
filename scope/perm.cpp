#include<iostream>

int main(){
    int counter;

    for(counter=0; counter<3; ++counter){
        int temporary=1;
        static int permanent = 1;

        std::cout<<"Temporary"<<temporary<<"Permanent"<<permanent<<std::endl;
        ++temporary;
        ++permanent;
    }
    return (0);
}