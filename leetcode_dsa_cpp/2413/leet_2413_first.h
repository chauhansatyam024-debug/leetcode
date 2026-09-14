//
// Created by satyamchauhan on 14/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_2413_FIRST_H
#define LEETCODE_DSA_CPP_LEET_2413_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_2413_FIRST_H
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n % 2 == 0){
            return n;
        }
        return n*2;

    }
};