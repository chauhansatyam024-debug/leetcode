//
// Created by satyamchauhan on 01/11/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_238_SECOND_H
#define LEETCODE_DSA_CPP_LEET_238_SECOND_H
// prefix and suffix , n
#endif //LEETCODE_DSA_CPP_LEET_238_SECOND_H
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int> result(n,1);
        int pre = 1;
        for(int i = 0 ; i<n ; i++){
            result[i] = pre;
            pre*=nums[i];
        }
        int suf = 1;
        for(int i = n-1; i>= 0; i--){
            result[i]*=suf; // we are multiplying it with value we added by prefix
            suf*=nums[i];
        }

        return result;

    }
};