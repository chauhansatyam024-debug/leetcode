//
// Created by satyamchauhan on 26/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_628_FAIL_H
#define LEETCODE_DSA_CPP_LEET_628_FAIL_H
// incomplete code , logic is bad and too big compare to normal solution
#endif //LEETCODE_DSA_CPP_LEET_628_FAIL_H
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        if(n <=3){
            int x = 1;
            for(int y : nums){
                x = x * y;
            }
            return x;
        }
        sort(nums.begin() , nums.end());
        int fix = nums[n-1];

        int count = 0;
        for(int i = 0; i<=1 ; i++){
            if(nums[i] < 0) count++;
        }
        int temp1 = 1;
        for(int i =0; i<2 ; i++){
            int temp = 0;
            if(count > 1 && nums[i] < 0){
                int pos = nums[i] * (-1);
                if(pos > nums[n - temp1]){
                    fix = fix
                }
            }
        }


        return 0;
    }
};