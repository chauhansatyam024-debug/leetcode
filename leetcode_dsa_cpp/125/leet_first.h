//
// Created by satyamchauhan on 16/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_FIRST_H
#define LEETCODE_DSA_CPP_LEET_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_FIRST_H
class Solution {
public:
    bool isPalindrome(string s) {
        string st = "";
        for(char x : s ){
            if(isalnum(x)){
                st +=static_cast<char>(tolower(x));
            }
        }
        int left = 0;
        int right = st.size() - 1;
        bool palin = true;
        while(left <= right){
            if(st[left] == st[right]){
                palin = true;
            }
            else{
                return false;
            }
            left++;
            right--;
        }
        return palin;
    }
};