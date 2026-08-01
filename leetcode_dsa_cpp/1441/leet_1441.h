//
// Created by satyamchauhan on 01/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_1441_H
#define LEETCODE_DSA_CPP_LEET_1441_H

#endif //LEETCODE_DSA_CPP_LEET_1441_H
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result{};
        for(int i = 1; i<=target.back() ; i++){
            if(find(target.begin() , target.end() , i) != target.end()){
                result.push_back("Push");
            }
            else{
                result.push_back("Push");
                result.push_back("Pop");
            }
        }
        return result;
    }
};