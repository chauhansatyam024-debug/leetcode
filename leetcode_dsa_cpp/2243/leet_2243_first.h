//
// Created by satyamchauhan on 16/11/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_2243_FIRST_H
#define LEETCODE_DSA_CPP_LEET_2243_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_2243_FIRST_H
class Solution {
public:
    string digitSum(string s, int k) {
        int i = 0, cnt = 0, sum = 0;
        string temp_s = s, st = "";

        while (true) {

            if (i == 0 && temp_s.size() <= k) return temp_s;


            sum += temp_s[i] - '0';
            cnt++;
            i++;


            if (cnt == k || i == temp_s.size()) {
                st += to_string(sum);
                sum = 0;
                cnt = 0;
            }
            if (i == temp_s.size()) {
                temp_s = st;
                st = "";
                i = 0;
            }
        }
        return "";
    }
};