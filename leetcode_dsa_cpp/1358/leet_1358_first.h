//
// Created by satyamchauhan on 05/11/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_1358_FIRST_H
#define LEETCODE_DSA_CPP_LEET_1358_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_1358_FIRST_H
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt = 0;
        for(int i =0 ;i < arr1.size(); i++){
            for(int j = 0; j<arr2.size() ; j++){
                int abu = abs(arr1[i] - arr2[j]);
                if(abu <= d){
                    break;
                }
                else if(j == arr2.size() - 1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};