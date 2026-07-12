//
// Created by satyamchauhan on 12/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_1331_MAIN_H
#define LEETCODE_DSA_CPP_LEET_1331_MAIN_H

// it keep the position fix
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        unordered_map <int,int> rank{};
        for(int n : sorted){
            // if will check only one number of same get same rank
            if(rank.find(n) == rank.end()){
                rank[n] = rank.size() + 1;  // i hv written == ? = (my stupid ass)
            }
        }
        for(int i = 0; i<arr.size() ; i++){
            arr[i] = rank[arr[i]];
        }
        return arr;
    }
};
#endif //LEETCODE_DSA_CPP_LEET_1331_MAIN_H
