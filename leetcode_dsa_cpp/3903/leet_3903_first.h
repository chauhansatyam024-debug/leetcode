
//
// Created by satyamchauhan on 04/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3903_FIRST_H
#define LEETCODE_DSA_CPP_LEET_3903_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_3903_FIRST_H

// 3ms , slow
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i = 0 ; i<nums.size() ; i++){
            auto it = max_element(nums.begin() , nums.begin() + i+1);
            auto iy = min_element(nums.begin() + i , nums.end());
            if(*it - *iy <= k){
                return i;
            }
        
        }
        sort(nums.begin() , nums.end());
        if(nums[nums.size()-1] - nums[0] <= k) return nums.size() - 1;

        return -1;
        
    }
};
