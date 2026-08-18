//
// Created by satyamchauhan on 18/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3471_FIRST_H
#define LEETCODE_DSA_CPP_LEET_3471_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_3471_FIRST_H
class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        if(k==nums.size()) return *max_element(nums.begin() , nums.end()); // logic by ai , only this if condition
        unordered_map<int,int> freq{}; // max_element return iterator pointing to address of maximum element , so we used * to return value

        for(int i = 0; i <= nums.size() - k; i++){
            for(int j = i; j < i + k; j++){
                freq[nums[j]]++;
            }
        }

        int temp = -1;
        for(auto pair : freq){
            if(pair.second == 1 && pair.first > temp){
                temp = pair.first;
            }
        }


        return temp;
    }
};