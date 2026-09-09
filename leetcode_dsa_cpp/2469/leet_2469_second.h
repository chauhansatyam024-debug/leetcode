//
// Created by satyamchauhan on 09/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_2469_SECOND_H
#define LEETCODE_DSA_CPP_LEET_2469_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_2469_SECOND_H
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32;

        return {kelvin, fahrenheit};
    }
};