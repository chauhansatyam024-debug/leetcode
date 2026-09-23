//
// Created by satyamchauhan on 24/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3895_FIRST_H
#define LEETCODE_DSA_CPP_LEET_3895_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_3895_FIRST_H
// 7ms , coz of to_string
class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt = 0;
        for(int i = 0 ; i<nums.size(); i++){
            string s = to_string(nums[i]);
            for(char c : s){
                if(digit == c-'0'){cnt++;}
            }
        }
        return cnt ;

    }
};