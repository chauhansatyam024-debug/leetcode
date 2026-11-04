//
// Created by satyamchauhan on 01/11/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_739_FIRST_H
#define LEETCODE_DSA_CPP_LEET_739_FIRST_H
// 47/48 , tll
#endif //LEETCODE_DSA_CPP_LEET_739_FIRST_H
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n,0);
        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                if(temperatures[j] > temperatures[i]){
                    result[i] = j - i;
                    break;
                }

            }
        }
        return result;
    }
};