//
// Created by satyamchauhan on 15/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_75_FIRST_H
#define LEETCODE_DSA_CPP_LEET_75_FIRST_H
// insertion sort , n^2
#endif //LEETCODE_DSA_CPP_LEET_75_FIRST_H
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        for(int i = 1  ;i<n ; i++){
            int key = nums[i];
            int j = i -1;
            while(j>=0 && nums[j] > key){
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = key;
        }

    }
};