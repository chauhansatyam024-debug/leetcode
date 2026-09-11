//
// Created by satyamchauhan on 12/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3483_FIRST_H
#define LEETCODE_DSA_CPP_LEET_3483_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_3483_FIRST_H
class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int cnt = 0 ;
        int freq[10] = {0};
        for(int x : digits){
            freq[x]++;
        }
        for(int h = 1 ; h<=9 ; h++){
            if(freq[h] == 0) continue;
            for(int t = 0; t<=9 ;t++){
                if(freq[t] == 0) continue;
                for(int o = 0 ; o<=8 ; o+=2){
                    if(freq[o] == 0) continue;
                    int nude[10] = {0};
                    nude[h]++;
                    nude[t]++;
                    nude[o]++;
                    bool ok = true;
                    for(int i = 0 ; i < 10 ; i++){
                        if(nude[i] > freq[i]){
                            ok = false;
                        }
                    }
                    if(ok){
                        cnt++;
                    }
                }
            }
        }
        return cnt;

    }
};