//
// Created by ZEYNEP on 16.11.2019.
//
#include <unordered_map>
#include <string>
#include <iostream>

int firstUniqChar(string s) {
    int len = s.length();
    unordered_map<char, int> um;
    for(int i=0; i<len; i++){
        um[s[i]]++;
    }

    for(int i=0; i<len; i++){
        if(um.count(s[i])==1){
            return i;
        }
    }
    return -1;
}

int main(){
    string s = "loveleetcode";
    std::cout << firstUniqChar(s) << std::endl;
    return 0;
}