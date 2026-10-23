//
// Created by satyamchauhan on 23/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_1_SECOND_FAIL_H
#define LEETCODE_DSA_CPP_LEET_1_SECOND_FAIL_H
// 55/66 failed 
#endif //LEETCODE_DSA_CPP_LEET_1_SECOND_FAIL_H
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> index{};
        int n = nums.size();
        for(int i = 0  ; i<n ; i++){
            index[nums[i]] = i;
        }
        sort(nums.begin() , nums.end());
        int i = 0;
        int k = n-1;
        while(true){
            int sum = nums[i] + nums[k];
            if(sum == target){
                return {index[nums[i]],index[nums[k]]};
            }
            else if (sum > target){
                k--;
            }
            else{
                i++;
            }
        }
        return {};
    }
};