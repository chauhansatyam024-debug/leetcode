//
// Created by satyamchauhan on 05/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3904_SECOND_H
#define LEETCODE_DSA_CPP_LEET_3904_SECOND_H
// 0ms and 202.64 mb
#endif //LEETCODE_DSA_CPP_LEET_3904_SECOND_H
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> minn(n);
        minn[n-1] = nums[n-1];
        for(int i = n-2 ; i>=0 ; i--){
            minn[i] = min(minn[i+1] , nums[i]);
        }
        int maxx = 0;
        for(int i = 0 ;i<n ; i++){
            if (nums[i] > maxx) {
                maxx = nums[i];
            }
            if(maxx - minn[i] <= k) return i;
        }
        return -1;

    }
};