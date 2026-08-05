//
// Created by satyamchauhan on 05/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3014_SECOND_H
#define LEETCODE_DSA_CPP_LEET_3014_SECOND_H
// it takes 10.4 , my old coz was right , there is no need of doing shit
#endif //LEETCODE_DSA_CPP_LEET_3014_SECOND_H
class Solution {
public:
    int minimumPushes(string word) {
        int count = 0;
        vector<int>  x(26,0);
        for(char y  : word){
            x[y - 'a']++;
        }
        sort(x.rbegin() , x.rend());
        for(int i = 0; i<26 ; i++){

            if(x[i] == 0){
                break;
            }
            int cost = i/8 + 1;
            count +=x[i] * cost;
        }


        return count;

    }
};