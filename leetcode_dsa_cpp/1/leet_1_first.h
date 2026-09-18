//
// Created by satyamchauhan on 18/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_1_FIRST_H
#define LEETCODE_DSA_CPP_LEET_1_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_1_FIRST_H
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n =  nums.size();
        int left = 0;
        int right = n - 1;
        while(left <= right){
            int sum = nums[left] + nums[right];
            if(right==left){
                left++;
                right=n-1;
                continue;
            }
            if(sum == target){
                return {left , right};
            }
            right--;


        }
        return {};
    }
};