// This program is for counting the number of words
#include<iostream>
#include<assert.h>
#include<vector>
#include<string>

namespace wordcounter{
std::vector<std::string> split(std::string str, char del){
    int first = 0; //first index
    int last = str.find_first_of(del); // last char of word
    
    std::vector<std::string> result; //initialize string vector

    // when the index is less than the size of string
    while(first<str.size()){

        // using substr function, get the part of string
        std::string subStr(str, first, last-first);
        // append to result vec
        result.push_back(subStr);
        // start index goes to the next word
        first=last+1;
        // find del string 
        last = str.find_first_of(del, first);

        if(last == std::string::npos){
            last = str.size();
        }
    }
    return result;
}

int counter(std::string sentence){
    int count; // counter of words
    std::vector<std::string> sp_sent; // split sentence
    sp_sent = split(sentence, ' ');
    count = sp_sent.size();
    return count;
}

}

// int main(){
//     std::string target_string = "Hello world!";
//     int word_count; // counter for words
//     word_count = wordcounter::counter(target_string);
//     std::cout<<word_count<<std::endl;
//     return 0;
// }
