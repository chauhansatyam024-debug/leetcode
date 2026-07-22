//
// Created by satyamchauhan on 22/07/26.
//
// bad code - it uses 94 mb and 3ms
#ifndef LEETCODE_DSA_CPP_LEET_4_3MS_H
#define LEETCODE_DSA_CPP_LEET_4_3MS_H

#endif //LEETCODE_DSA_CPP_LEET_4_3MS_H
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end() , nums2.begin() , nums2.end());
        sort(nums1.begin() , nums1.end());
        int n = nums1.size();

        return n % 2 == 0 ?(double) (nums1[n/2] + nums1[(n/2) - 1]) / 2 : (double)  nums1[n/2] ;
    }
};