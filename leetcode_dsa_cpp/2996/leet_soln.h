//
// Created by satyamchauhan on 11/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_SOLN_H
#define LEETCODE_DSA_CPP_LEET_SOLN_H

#endif //LEETCODE_DSA_CPP_LEET_SOLN_H
class Solution {
public:
    int missingInteger(std::vector<int>& nums) {
        int n = nums.size();
        std::unordered_set<int> num_set(nums.begin(), nums.end());
        int prefix_len = 1;

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                prefix_len += 1;
            } else {
                break;
            }
        }

        int total = (nums[prefix_len - 1] + nums[0]) * prefix_len / 2; // n(n+1)/2) ap series for 1 to n sum
        while (num_set.count(total)) {
            total += 1;
        }

        return total;
    }
};