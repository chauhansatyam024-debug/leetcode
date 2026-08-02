//
// Created by satyamchauhan on 02/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_877_FIRST_FAIL_H
#define LEETCODE_DSA_CPP_LEET_877_FIRST_FAIL_H

#endif //LEETCODE_DSA_CPP_LEET_877_FIRST_FAIL_H
class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alice = 0;
        int j = piles.size() - 1;
        int i = 0;
        int bob = 0;
        int chance = 1;
        while (i <= j) {
            if (chance % 2 != 0) {
                if (piles[i] >= piles[j]) {
                    if (piles[i + 1] > piles[j - 1]) {
                        alice += piles[j];
                        j--;
                        chance++;
                    } else {
                        alice += piles[i];
                        i++;
                        chance++;
                    }
                } else if (piles[j] > piles[i]) {
                    if (piles[i + 1] > piles[j - 1]) {
                        alice += piles[i];
                        i++;
                        chance++;
                    } else {
                        alice += piles[j];
                        j--;
                        chance++;
                    }
                }
            } else {
                if (piles[i] >= piles[j]) {
                    bob += piles[i];
                    i++;
                    chance++;
                } else if (piles[j] > piles[i]) {
                    bob += piles[j];
                    j--;
                    chance++;
                }
            }
        }
        if (alice > bob) {
            return true;
        } else {
            return false;
        }
        return true;
    }
};
