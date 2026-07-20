//
// Created by satyamchauhan on 20/07/26.
//
#include<numeric> // for gcd
#ifndef LEETCODE_DSA_CPP_LEET_3658_H
#define LEETCODE_DSA_CPP_LEET_3658_H

#endif //LEETCODE_DSA_CPP_LEET_3658_H

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd = 0;
        int even = 0;
        for(int i = 1; i<=n * 2 ; i++){ // whenever u hv to found i first even or odd put range - <=n * 2 ,(= is for even ,for odd don't hv to put =)
            if(i % 2 == 0 ) even+=i;
            else odd+=i;
        }
        return gcd(odd,even);
    }
};