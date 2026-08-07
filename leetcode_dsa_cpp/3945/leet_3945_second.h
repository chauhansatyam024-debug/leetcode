//
// Created by satyamchauhan on 07/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3945_SECOND_H
#define LEETCODE_DSA_CPP_LEET_3945_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_3945_SECOND_H
class Solution {
public:
    int digitFrequencyScore(int n) {
        int result = 0;
        string s = to_string(n);
        for(char x : s){
            result =result +  x -'0';

        }
        return result;
    }
};