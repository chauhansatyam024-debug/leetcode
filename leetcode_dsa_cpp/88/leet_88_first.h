//
// Created by satyamchauhan on 01/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_88_FIRST_H
#define LEETCODE_DSA_CPP_LEET_88_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_88_FIRST_H
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m+n-1 ; i>=m;  i--){
            nums1[i] = nums2[i - m];
        }
        sort(nums1.begin() , nums1.end());

    }
};