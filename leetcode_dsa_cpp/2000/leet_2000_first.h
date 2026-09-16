//
// Created by satyamchauhan on 16/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_2000_FIRST_H
#define LEETCODE_DSA_CPP_LEET_2000_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_2000_FIRST_H
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = -1;
        int l = word.size();
        for(int i = 0 ;i<l ; i++){
            if(word[i] == ch) {n = i; break;}
        }
        if(n == -1)return word;

        for(int i = n ; i>n/2 ; i--){
            swap(word[i],word[n-i]);
        }
        return word;
    }
};