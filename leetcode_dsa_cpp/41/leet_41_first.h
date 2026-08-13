//
// Created by satyamchauhan on 13/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_41_FIRST_H
#define LEETCODE_DSA_CPP_LEET_41_FIRST_H
// one of the easiest logic , but not feasble coz time is 55-65 ms and it only beat 12% in storage
#endif //LEETCODE_DSA_CPP_LEET_41_FIRST_H
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> x(nums.begin() , nums.end());
        for(int i = 1; i<100000000 ; i++){
            if(!x.count(i)){ // every question help in some way
                return i;
            }
        }
        return 0;
    }
};