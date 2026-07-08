//
// Created by satyamchauhan on 08/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_2553_H
#define LEETCODE_DSA_CPP_LEET_2553_H


class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> num2 {};
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] >= 10){ //  i stupid used size() fun here
                string s2 = to_string(nums[i]);
                for(char x : s2){
                    num2.push_back(x - '0'); // this trick changed my thinking
                }

            }
            else{
                num2.push_back(nums[i]);
            }
        }
        return num2;
    }
};


#endif //LEETCODE_DSA_CPP_LEET_2553_H
