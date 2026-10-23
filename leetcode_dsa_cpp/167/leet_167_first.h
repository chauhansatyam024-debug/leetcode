//
// Created by satyamchauhan on 23/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_167_FIRST_H
#define LEETCODE_DSA_CPP_LEET_167_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_167_FIRST_H
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int k = numbers.size()-1;
        while(i<k){
            int sum  = numbers[i] + numbers[k];
            if(sum == target){
                return {i+1,k+1};
            }
            else if(sum > target){
                k--;
            }
            else{
                i++;
            }
        }
        return {};
    }
};