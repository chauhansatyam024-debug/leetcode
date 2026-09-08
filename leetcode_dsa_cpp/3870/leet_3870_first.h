//
// Created by satyamchauhan on 08/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3870_FIRST_H
#define LEETCODE_DSA_CPP_LEET_3870_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_3870_FIRST_H
class Solution {
public:
    int countCommas(int n) {
        string s = to_string(n);
        int o  = s.length();
        if(o < 4) return 0;
        if(o >= 4) return (n - 1000) + 1;


        return 0;

    }
};