// strings
#include<iostream>

int main(){
    std::string first_name = "Chibikuri";
    std::string last_name = "Cocoa";
    std::cout<<first_name<<" "<<last_name<<"\n";
    std::cout<<first_name.length()<<" "<<last_name.length()<<"\n";
    std::cout<<first_name.at(0)<<" "<<last_name.length()<<"\n";
    std::cout<<first_name.substr(0, 10)<<" "<<last_name.length()<<"\n";
    return (0);
}