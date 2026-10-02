//
// Created by satyamchauhan on 02/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_242_SECOND_H
#define LEETCODE_DSA_CPP_LEET_242_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_242_SECOND_H
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return t == s;

    }
};