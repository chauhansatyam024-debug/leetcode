//
// Created by satyamchauhan on 01/11/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_238_FIRST_H
#define LEETCODE_DSA_CPP_LEET_238_FIRST_H
// n^2 time complexicity , tll
#endif //LEETCODE_DSA_CPP_LEET_238_FIRST_H
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),1);
        int low = 0;
        int temp = 0;
        while(temp<nums.size()){
            if(low == temp){
                low++;
                continue;
            }
            if(low == nums.size()){
                low = 0;
                temp++;
            }
            else{
                result[temp] = result[temp] * nums[low];
                low++;
            }
        }
        return result;
    }
};