#include<iostream>

int& biggest(int array[], int n_elements){
    int index; //current index
    int biggest; // biggest index

    biggest = 0;
    for(index=1; index<n_elements;++index){
        if(array[biggest] < array[index]){
            biggest = index;
        }
        return array[biggest];
    }
}

int main(){
    int item_array[5] = {1, 2, 3, 50, 10};
    std::cout<<"The biggest element is "<<biggest(item_array, 5)<<std::endl;
    return 0;
}