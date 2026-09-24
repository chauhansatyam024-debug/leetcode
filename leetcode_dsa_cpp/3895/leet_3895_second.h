//
// Created by satyamchauhan on 24/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3895_SECOND_H
#define LEETCODE_DSA_CPP_LEET_3895_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_3895_SECOND_H
// 0ms

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt = 0;
        for(int n : nums){
            while(n){
                int rem  = n%10;
                if(digit == rem){cnt++;}
                n = n/10;
            }
        }
        return cnt ; // hello

    }
};