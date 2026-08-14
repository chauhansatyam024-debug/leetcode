//
// Created by satyamchauhan on 15/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3090_H
#define LEETCODE_DSA_CPP_LEET_3090_H

#endif //LEETCODE_DSA_CPP_LEET_3090_H
class Solution {
public:
    // sliding window
    int maximumLengthSubstring(string s) {
        int freq[26] = {0};
        int left = 0 , maxx = 0;
        for (int r = 0 ; r< s.szie() ; r++) {
            freq[s[r] - 'a']++;
            while (freq[s[r] - 'a'] > 2) {
                freq[s[left] - 'a']--;
                left++;
            }
            maxx = max(maxx, (r - left) + 1); // r -left + 1 " pemdas from left to right"
        }
    }
};