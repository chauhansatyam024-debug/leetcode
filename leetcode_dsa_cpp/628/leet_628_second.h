//
// Created by satyamchauhan on 26/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_628_SECOND_H
#define LEETCODE_DSA_CPP_LEET_628_SECOND_H
// i'm not satisfied with this logic , i will try to complete and improve my previous logic and code
#endif //LEETCODE_DSA_CPP_LEET_628_SECOND_H
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        int n = nums.size() - 1;
        int a = nums[0] * nums[1] * nums[n];
        int b = nums[n] * nums[n-1] * nums[n-2];
        return max(a,b);
    }
};