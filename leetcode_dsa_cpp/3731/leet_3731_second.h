//
// Created by satyamchauhan on 04/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3731_SECOND_H
#define LEETCODE_DSA_CPP_LEET_3731_SECOND_H
// 5ms and 33mb
#endif //LEETCODE_DSA_CPP_LEET_3731_SECOND_H
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<int> result{};
        set<int>st(nums.begin() , nums.end());
        int start = nums[0];
        int end = nums.back();
        for(int i = start + 1; i<=end - 1 ; i++){
            if(st.count(i) == 0){
                result.push_back(i);
            }

        }
        return result;
    }
};