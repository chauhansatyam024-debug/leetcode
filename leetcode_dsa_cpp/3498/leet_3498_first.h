//
// Created by satyamchauhan on 20/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3498_FIRST_H
#define LEETCODE_DSA_CPP_LEET_3498_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_3498_FIRST_H
class Solution {
public:
    int reverseDegree(string s) {
        int result = 0;
        for(int i = 0 ;i<s.size() ; i++){
            int temp = (i+1) * (26-(s[i]-'a'));
            result+=temp;
        }
        return result;
    }
};