//
// Created by satyamchauhan on 19/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3512_SECOND_H
#define LEETCODE_DSA_CPP_LEET_3512_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_3512_SECOND_H
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for(int x : nums){
            sum+=x;
        }
        return sum % k;
    }
};