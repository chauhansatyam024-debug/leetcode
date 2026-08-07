//
// Created by satyamchauhan on 07/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3945_THIRD_H
#define LEETCODE_DSA_CPP_LEET_3945_THIRD_H

#endif //LEETCODE_DSA_CPP_LEET_3945_THIRD_H
class Solution {
public:
    int digitFrequencyScore(int n) {
        long long result = 0;
        while(n>0){
            result= result + n%10;
            n = n/10;
        }
        return result;
    }
};