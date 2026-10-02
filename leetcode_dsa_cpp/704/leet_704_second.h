//
// Created by satyamchauhan on 02/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_704_SECOND_H
#define LEETCODE_DSA_CPP_LEET_704_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_704_SECOND_H
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high = nums.size();
        int low = 0;
        while(low <= high && low < nums.size()){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){low = mid + 1;}
            else high = mid -1;
        }


        return -1;
    }
};