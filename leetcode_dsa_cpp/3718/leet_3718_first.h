//
// Created by satyamchauhan on 25/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3718_FIRST_H
#define LEETCODE_DSA_CPP_LEET_3718_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_3718_FIRST_H
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());
        int n = k;
        for(int i = 0; i<nums.size() ; i++){
            if(n == nums[i]){
                n+=k;
            }

        }


        return n;
    }
};