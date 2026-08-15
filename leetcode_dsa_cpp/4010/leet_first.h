//
// Created by satyamchauhan on 15/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_FIRST_H
#define LEETCODE_DSA_CPP_LEET_FIRST_H
// logic was simple , but got some time waste in d.type conversion issues
#endif //LEETCODE_DSA_CPP_LEET_FIRST_H
class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        unsigned long long ans = 0;
        for(int i = 0; i<nums.size() ; i++){
            unsigned long long temp = 0;
            long long gccd =0;

            for(int j =i+1 ;j<nums.size() ; j++){
                long long g = gcd(nums[i],nums[j]);
                gccd = g * g;
                temp = (long long )nums[i] * nums[j] / gccd;
                ans = maax(ans,temp);


            }
        }
        return ans;

    }
};