//
// Created by satyamchauhan on 22/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3622_SECOND_H
#define LEETCODE_DSA_CPP_LEET_3622_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_3622_SECOND_H
class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int pro = 1;
        string s = to_string(n);
        for(char x : s){
            sum +=(x - '0');
            pro *=(x - '0');
        }
        if(n % (sum + pro ) == 0){
            return true;
        }
        return false;
    }
};