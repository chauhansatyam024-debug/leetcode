//
// Created by satyamchauhan on 24/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3783_FIRST_H
#define LEETCODE_DSA_CPP_LEET_3783_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_3783_FIRST_H
class Solution {
public:
    int mirrorDistance(int n) {
        int j = n;
        int k = 0;
        while(n!=0){
            k = k * 10 + n%10;
            n/=10;
        }
        return abs(j - k);
    }
};