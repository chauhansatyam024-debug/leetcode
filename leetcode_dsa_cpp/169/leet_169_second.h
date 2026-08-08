//
// Created by satyamchauhan on 08/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_169_SECOND_H
#define LEETCODE_DSA_CPP_LEET_169_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_169_SECOND_H
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq{};
        for(int n : nums) {
            freq[n]++;
        }
        for(auto pair : freq){
            if(pair.second > nums.size() / 2){
                return pair.first;
            }
        }
        return 0;
    }
};