//
// Created by satyamchauhan on 11/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_11_H
#define LEETCODE_DSA_CPP_LEET_11_H

#endif //LEETCODE_DSA_CPP_LEET_11_H
class Solution {
public:
    int maxArea(vector<int>& height) {
        int f = 0;
        int l = height.size() - 1;
        int maxwater = 0;
        while(f< l){
            int width = l - f;
            int minn = min(height[f] , height[l]);
            int water = minn * width;
            maxwater = max(water , maxwater);

            if(height[f] < height[l]){
                f++;
            }
            else{
                l--;
            }
        }
        return maxwater;
    }
};