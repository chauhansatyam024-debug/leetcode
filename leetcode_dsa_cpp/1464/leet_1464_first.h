//
// Created by satyamchauhan on 27/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_1464_FIRST_H
#define LEETCODE_DSA_CPP_LEET_1464_FIRST_H
// two pointer technique
#endif //LEETCODE_DSA_CPP_LEET_1464_FIRST_H
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int s = -1;
        int l = -1;
        for(int x : nums){
            if(x  > l){
                s =l;
                l = x;
            }
            else if( x == l && x > s){
                s =x;
            }
            else if(x < l && x > s){
                s = x;
            }
        }
        return (l - 1) * (s - 1);
    }
};