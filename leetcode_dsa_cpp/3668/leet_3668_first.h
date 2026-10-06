//
// Created by satyamchauhan on 06/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3668_FIRST_H
#define LEETCODE_DSA_CPP_LEET_3668_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_3668_FIRST_H
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n =order.size();
        int j = 0;
        int i = 0;

        while(j<friends.size()){

            if(friends[j] == order[i]){
                friends[j] = i;
                j++;
                i=0;
            }
            else{
                i++;
            }
        }

        sort(friends.begin(),friends.end());

        for(int i = 0 ; i<friends.size() ; i++){
            friends[i] = order[friends[i]];
        }

        return friends;
    }
};