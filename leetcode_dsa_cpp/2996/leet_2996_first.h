//
// Created by satyamchauhan on 11/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_2996_FIRST_H
#define LEETCODE_DSA_CPP_LEET_2996_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_2996_FIRST_H
class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = 0;

        std::unordered_set<int> num_set(nums.begin(), nums.end());

        for(int i = 0; i<nums.size() ; i++){
            sum+=nums[i];
            if(i + 1 >=nums.size()){ // array overflow in 2nd if condntion
                break;
            }
            if(nums[i] + 1 == nums[i + 1]){
                continue;
            }
            else{
                break;
            }
        }
        while (num_set.count(sum)) { // count return 0 if sum isn't in set and 1 if is in set.
            sum += 1;
        }

        return sum;
    }
};