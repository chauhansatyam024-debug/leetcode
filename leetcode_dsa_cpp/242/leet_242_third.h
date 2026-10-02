//
// Created by satyamchauhan on 02/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_242_THIRD_H
#define LEETCODE_DSA_CPP_LEET_242_THIRD_H

#endif //LEETCODE_DSA_CPP_LEET_242_THIRD_H
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,int> freq{};
        for(char c : s)freq[c]++;
        for(char c : t)freq[c]--;

        for(auto pair : freq){
            if(pair.second != 0) return false;
        }

        return true;

    }
};