//
// Created by satyamchauhan on 03/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_FIRST_3876_H
#define LEETCODE_DSA_CPP_LEET_FIRST_3876_H
// 610 test case only
#endif //LEETCODE_DSA_CPP_LEET_FIRST_3876_H
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        if(nums1.size() < 2) return true;
        int even = 0, odd = 0;
        if(n < 3){
            int a = nums1[0];
            int b = nums1[1];

            if( a % 2 == 0 && b % 2 == 1){
                if(a > b ){
                    return true;
                }
                else return false;
            }
            else if( a % 2 == 1 && b % 2 == 0){
                if( b > a){
                    return true;
                }
                else return false;
            }
            else return true;
        }
        int maxx_odd = INT_MIN;
        int maxx_even = INT_MIN;
        for(int i = 0 ;i<nums1.size() ; i++){
            if(nums1[i] % 2 == 0) {
                if(maxx_even < nums1[i]){
                    maxx_even = nums1[i];
                }
                even++;
            }
            else {
                if(nums1[i] > maxx_odd){
                    maxx_odd = nums1[i];
                }
                odd++;
            }
        }
        if(maxx_odd > maxx_even && even > odd){
            return false;
        }
        if(odd == 0 && even != 0) return true;
        if(even == 0 && odd != 0) return true;
        else if (odd < even) return false;
        else if(odd > even){
            return true;
        }
        return false;
    }
};