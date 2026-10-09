//
// Created by satyamchauhan on 09/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_1480_FIRST_H
#define LEETCODE_DSA_CPP_LEET_1480_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_1480_FIRST_H
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int summ  = 0;
        for(int i  = 0 ; i<nums.size() ; i++){
            summ+=nums[i];
            nums[i] = summ;
        }

        return nums;
    }
};