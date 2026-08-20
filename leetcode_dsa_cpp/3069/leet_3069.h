//
// Created by satyamchauhan on 21/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3069_H
#define LEETCODE_DSA_CPP_LEET_3069_H

#endif //LEETCODE_DSA_CPP_LEET_3069_H
class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr{};
        arr.push_back(nums[0]);
        vector<int> arr2{};
        arr2.push_back(nums[1]);
        int temp = nums[0];
        int temp2 = nums[1];
        for(int i = 2;i<nums.size() ; i++){
            if(temp > temp2){
                arr.push_back(nums[i]);
                temp = nums[i];
            }
            else{
                arr2.push_back(nums[i]);
                temp2  = nums[i];
            }

        }
        arr.insert(arr.end() , arr2.begin() , arr2.end());
        return arr;
    }
};