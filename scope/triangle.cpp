/************************
 * triangle.cpp         *
 * calc size of triangle*
 * **********************/
#include<assert.h>
#include<iostream>

float triangle(float width, float height){
    assert(width>=0.0);
    assert(width>=0.0);
    float area; // area of triangle
    area = width * height /2;
    return (area);
}

int main(){
    float size;
    size = triangle(3.3, 3.4);
    std::cout<<size<<std::endl;
    return (0);
}