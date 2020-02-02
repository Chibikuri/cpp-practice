#include<iostream>

namespace math{

    int square(const int i){
        return (i*i);
    }
} // namespace math

namespace body{
    const double PI = 3.14159;
    double area(const double radius){
        return (PI*radius*radius);
    }

}

int main(){
    int sq;
    sq = math::square(2);
    std::cout<<sq<<std::endl;
    return 0;
}
