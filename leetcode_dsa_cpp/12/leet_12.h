//
// Created by satyamchauhan on 12/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_12_H
#define LEETCODE_DSA_CPP_LEET_12_H

#endif //LEETCODE_DSA_CPP_LEET_12_H
class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> vals = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
            {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
            {5, "V"},    {4, "IV"},   {1, "I"}};

        string result = "";
        for (auto& [value, symbol] : vals) {
            while (num >= value) {
                result += symbol;
                num -= value;
            }
        }
        return result;
    }
};