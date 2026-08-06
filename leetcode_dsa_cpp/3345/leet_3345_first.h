//
// Created by satyamchauhan on 06/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3345_FIRST_H
#define LEETCODE_DSA_CPP_LEET_3345_FIRST_H
// i used string , anyone else can use num % 10 trick
// hello
// 0ms and 9.36mb , it takes some space
#endif //LEETCODE_DSA_CPP_LEET_3345_FIRST_H
class Solution {
public:
    int smallestNumber(int n, int t) {
        int g = n ;
        while(true){ // there will be answer , so there is no need of any while condition
            int result = 1;
            string s  =to_string(g);
            for(char x : s){
                result = result * (x - '0');
            }
            if(result % t == 0){
                return g;
            }
            else{
                g++;
            }
        }
        return g;
    }
};