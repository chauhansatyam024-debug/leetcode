//
// Created by satyamchauhan on 04/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3903_SECOND_H
#define LEETCODE_DSA_CPP_LEET_3903_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_3903_SECOND_H

// actually we don't need , sort
// i did a small mistake in understanding question
// 0 ms and O(n^2)
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


        return -1;

    }
};