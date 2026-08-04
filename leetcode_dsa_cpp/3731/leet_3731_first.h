//
// Created by satyamchauhan on 04/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3731_FIRST_H
#define LEETCODE_DSA_CPP_LEET_3731_FIRST_H
// uses 3ms and 32.84mb
#endif //LEETCODE_DSA_CPP_LEET_3731_FIRST_H
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> result{};
        vector<int> dupl{};
        for (int i = nums[0]; i <= nums[nums.size() - 1]; i++) {
            dupl.push_back(i);
        }
        if (dupl.size() == nums.size()) {
            return {};
        } else {
            int i = 1; // dupl
            int j = 1; // nums
            while (j < nums.size()) {
                if (dupl[i] != nums[j]) {
                    result.push_back(dupl[i]);
                    i++;
                }
                else {
                    i++;
                    j++;
                }
            }
        }
        return result;
    }
};