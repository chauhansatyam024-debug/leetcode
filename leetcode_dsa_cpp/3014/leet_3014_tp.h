//
// Created by satyamchauhan on 05/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3014_TP_H
#define LEETCODE_DSA_CPP_LEET_3014_TP_H
// done by doing test by test case , not a optimal solution
#endif //LEETCODE_DSA_CPP_LEET_3014_TP_H
class Solution {
public:
    int minimumPushes(string word) {
        int count = 0;
        for(int i =0 ; i<word.size() ; i++){
            if(i>=24){
                count+=4;
            }
            else if(i>=16){
                count +=3;
            }
            else if(i>7){
                count+=2;
            }
            else{
                count++;
            }
        }
        return count;
    }
};