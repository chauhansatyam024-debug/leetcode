//
// Created by satyamchauhan on 23/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_136_SECOND_H
#define LEETCODE_DSA_CPP_LEET_136_SECOND_H
// 0ms
#endif //LEETCODE_DSA_CPP_LEET_136_SECOND_H
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for(int n : nums){
            x^=n; // every number XOR by itself result 0 , so only single will pass
                  //For nums = [4, 1, 2, 1, 2]: 0 ⊕ 4 ⊕ 1 ⊕ 2 ⊕ 1 ⊕ 2 Rearranging duplicates: 4^(1⊕1)  (2⊕2) 4 ⊕ 0 ⊕ 0 = 4 , both symbol are same


        }
        return x;
    }
};