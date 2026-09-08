//
// Created by satyamchauhan on 08/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3870_SECOND_H
#define LEETCODE_DSA_CPP_LEET_3870_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_3870_SECOND_H
class Solution {
public:
    int countCommas(int n) {
        if(n < 1000) return 0;
        return  n - 1000 + 1;

    }
};