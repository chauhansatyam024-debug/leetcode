//
// Created by satyamchauhan on 22/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3622_FIRST_H
#define LEETCODE_DSA_CPP_LEET_3622_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_3622_FIRST_H
class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int pro = 1;
        int x = n;
        while(n!=0){
            sum+=(n%10);
            pro*=(n%10);
            n /=10;
        }
        if(x % (sum + pro ) == 0){
            return true;
        }
        return false;
    }
};