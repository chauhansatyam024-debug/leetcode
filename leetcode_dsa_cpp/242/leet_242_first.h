//
// Created by satyamchauhan on 02/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_242_FIRST_H
#define LEETCODE_DSA_CPP_LEET_242_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_242_FIRST_H
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){return false;}
        unordered_map<char,int> freq{};
        unordered_map<char,int> freq2{};
        for(int i = 0 ; i<s.size() ; i++){
            freq[s[i]]++;
            freq2[t[i]]++;
        }
        for(char c : s){
            if(freq[c] != freq2[c])return false;
        }
        return true;
    }
};