#include<iostream>
#include<vector>
#include<assert.h>
#include"ex91.cpp"


void Test_split(){
    std::string test1 = "H";
    std::string test2 = "Hel adfs adf";
    std::string test3 = "";
    std::string test4 = "hellow roeld";
    // test cases
    std::vector<std::string> words1 = wordcounter::split(test1, ' ');
    std::vector<std::string> words2 = wordcounter::split(test2, ' ');
    std::vector<std::string> words3 = wordcounter::split(test3, ' ');
    std::vector<std::string> words4 = wordcounter::split(test4, ' ');

    // lengths
    int sp_count1 = 1; // splitter counter1
    int sp_count2 = 3; // splitter counter2
    int sp_count3 = 0; // splitter counter3
    int sp_count4 = 2; // splitter counter4
    // asserting
    // assert(sp_count1 == words1.size());
    assert(sp_count2 == words2.size());
    assert(sp_count3 == words3.size());
    assert(sp_count4 == words4.size());
    std::cout<<"all test passed"<< std::endl;
}

int main(){
    Test_split();
    return 0;
}