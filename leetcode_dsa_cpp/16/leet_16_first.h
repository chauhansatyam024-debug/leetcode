//
// Created by satyamchauhan on 17/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_16_FIRST_H
#define LEETCODE_DSA_CPP_LEET_16_FIRST_H
// more the gaps between code , more readable it is
#endif //LEETCODE_DSA_CPP_LEET_16_FIRST_H
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int sums = nums[0] + nums[1] + nums[2];

        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {

            int j = i + 1;

            int k = n - 1;

            while (j < k) {

                int sum = nums[i] + nums[j] + nums[k];

                int gwen = abs(sum - target);

                if (gwen < abs(sums - target)) {

                    sums = sum;

                }
                if (sum > target) {

                    k--;
                }
                else if (sum < target) {

                    j++;

                } else {

                    return sum;
                }
            }
        }

        return sums;
    }
};