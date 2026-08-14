//
// Created by satyamchauhan on 15/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_FAIL_H
#define LEETCODE_DSA_CPP_LEET_FAIL_H
// wrong code
#endif //LEETCODE_DSA_CPP_LEET_FAIL_H
class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxx = 0;
        unordered_map<char,int> freq{};
        for(int i = 0 ; i <s.size() ; i++){
            int sum = 1;
            freq[s[i]]++;
            if(i+1 >= s.size()){
                maxx = max(sum,maxx);
                return maxx;
            }
            if(s[i] != s[i+1]){
                sum++;

            }
            else{
                if(freq[s[i]] > 2){
                    maxx = max(sum,maxx);
                    sum=1;
                    freq[s[i]] = 0;
                }
                else{
                    sum++;
                }

            }

        }
        return 0;
    }
};