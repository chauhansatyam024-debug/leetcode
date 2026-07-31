//
// Created by satyamchauhan on 31/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_69_H
#define LEETCODE_DSA_CPP_LEET_69_H

#endif //LEETCODE_DSA_CPP_LEET_69_H
//using ll = long long;
int sqr(int x) {
    long long low = 0 , high = x;
    int ans = 0;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (mid * mid == x) {
            return mid;
        }
        else if (mid * mid < x) {
            ans = (int) mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}
