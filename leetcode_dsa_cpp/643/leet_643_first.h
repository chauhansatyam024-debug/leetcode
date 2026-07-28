//
// Created by satyamchauhan on 28/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_643_FIRST_H
#define LEETCODE_DSA_CPP_LEET_643_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_643_FIRST_H

// will get minor error in float , so used double
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double current = 0;
        for(int i = 0; i<k ; i++){

            current +=nums[i];
        }
        double maxx = current / k;
        for(int i = 1 ; i<=n-k; i++){
            current = current -( nums[i - 1]) + (nums[i + (k- 1)]); // sum
            double avg = current / k; // avg

            maxx = maxx < avg ? avg : maxx; // used terminator operator
        }
        return maxx;
    }
};