//
// Created by satyamchauhan on 21/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_35_SECOND_H
#define LEETCODE_DSA_CPP_LEET_35_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_35_SECOND_H
class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == target)
                return mid;
            else if (arr[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low; // reason in practice directory in bin2_real.cpp file
    }
};