//
// Created by satyamchauhan on 09/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_1108_FIRST_H
#define LEETCODE_DSA_CPP_LEET_1108_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_1108_FIRST_H
class Solution {
public:
    string defangIPaddr(string address) {
        string ss = "";
        for(int i  = 0 ; i < address.size() ; i++){
            if(address[i] == '.'){
                ss+='[';
                ss+='.';
                ss+=']';
            }
            else{
                ss+=address[i];
            }
        }
        return ss;
    }
};