//
// Created by satyamchauhan on 08/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_169_FIRST_H
#define LEETCODE_DSA_CPP_LEET_169_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_169_FIRST_H
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq{};
        for(int n : nums){
            freq[n]++;
        }
        int max = 0;
        int val = 0;
        for(auto pair : freq){
            if(pair.second > max){
                max = pair.second;
                val = pair.first;
            }

        }
        return val;
    }
};