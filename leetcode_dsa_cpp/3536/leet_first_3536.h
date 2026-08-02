//
// Created by satyamchauhan on 02/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_FIRST_3536_H
#define LEETCODE_DSA_CPP_LEET_FIRST_3536_H


// converted int to string then used for loop to find max and sec number

// time = 0ms , but space = 9.46 mb something only beated 5.36% people , if u want to make space friendly use "num % 10" trick

#endif //LEETCODE_DSA_CPP_LEET_FIRST_3536_H
class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        int max =  INT_MIN;
        int sec = INT_MIN;
        for(char c : s){
            int temp1 = (c - '0');
            if(temp1 >= max){
                sec  = max;
                max = temp1;
            }
            else if(temp1 < max && temp1 >= sec){
                sec = temp1;
            }
        }
        return max * sec;
    }
};