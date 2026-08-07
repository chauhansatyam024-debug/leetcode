//
// Created by satyamchauhan on 07/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3945_H
#define LEETCODE_DSA_CPP_LEET_3945_H

#endif //LEETCODE_DSA_CPP_LEET_3945_H
class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> result{};
        string s = to_string(n);
        for(char x : s){
            int temp = x -'0';
            result[temp]++;
        }
        int res = 0;
        for(auto &pair : result){
            res = res + (pair.first * pair.second);
        }
        return res;
    }
};