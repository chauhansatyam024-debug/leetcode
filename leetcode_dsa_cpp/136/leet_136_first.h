//
// Created by satyamchauhan on 23/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_136_FIRST_H
#define LEETCODE_DSA_CPP_LEET_136_FIRST_H
// 16ms
#endif //LEETCODE_DSA_CPP_LEET_136_FIRST_H
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq{};
        for(int n : nums){
            freq[n]++;

        }
        for(auto pair : freq){
            if(pair.second == 1){
                return pair.first;
            }
        }
        return 0;

    }
};