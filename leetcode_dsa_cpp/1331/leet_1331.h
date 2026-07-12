//
// Created by satyamchauhan on 12/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_1331_H
#define LEETCODE_DSA_CPP_LEET_1331_H

// putput was not correct , but what we need is correct
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> result{};
        int numbering = 1;
        for(int i =0 ; i<arr.size(); i++){
            result.push_back(numbering);
            numbering++;
        }
        return result;
    }
};

#endif //LEETCODE_DSA_CPP_LEET_1331_H
