//
// Created by satyamchauhan on 08/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEER_3756_1ST_H
#define LEETCODE_DSA_CPP_LEER_3756_1ST_H
// this solution excedded time limit

class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        vector<int> result{};
        for(int i = 0; i<queries.size() ; i++){
            const long long MOD = 1000000007; // modulo
            long long  num1 = 0; // for containig all non zero number
            long long num2 = 0; // for containing sum
            int left = queries[i][0];
            int right = queries[i][1];
            string s2 =s.substr(left,right-left+1);//I taked the help of claude for len
            for(auto x: s2){
                if(x == '0'){
                    continue;
                }
                else{
                    int num3 = x - '0'; // to extract the number
                    num1 = (num1 * 10 +(num3)) % MOD;
                    num2 = num2 + num3;
                }
            }
            result.push_back((num1 * num2) % MOD);
        }
        return result;
    }
};
/*for (int j = left; j <= right; j++) { we can change the whole code from substr to end of inner loop
    if (s[j] == '0')
        continue;

    int digit = s[j] - '0';
    num1 = (num1 * 10 + digit) % MOD;
    num2 += digit;
}*/

#endif //LEETCODE_DSA_CPP_LEER_3756_1ST_H
