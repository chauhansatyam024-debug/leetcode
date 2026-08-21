//
// Created by satyamchauhan on 21/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_FIRST_217_H
#define LEETCODE_DSA_CPP_LEET_FIRST_217_H

#endif //LEETCODE_DSA_CPP_LEET_FIRST_217_H
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq{};
        for(int n : nums){
            freq[n]++;
            if(freq[n] > 1) return 1;
        }
        return 0;
    }
};