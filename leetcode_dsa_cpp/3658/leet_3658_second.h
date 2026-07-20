//
// Created by satyamchauhan on 20/07/26.
//
#include"numeric"
#ifndef LEETCODE_DSA_CPP_LEET_3658_SECOND_H
#define LEETCODE_DSA_CPP_LEET_3658_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_3658_SECOND_H

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd = 0;
        int even = 0;
        for(int i = 1; i<=n * 2 ; i+=2){  // without conditon (if , else )
            odd+=i;
            even= even + (i + 1);
        }
        return gcd(odd,even);
    }
};