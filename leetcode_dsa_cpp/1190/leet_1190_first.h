//
// Created by satyamchauhan on 27/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_1190_FIRST_H
#define LEETCODE_DSA_CPP_LEET_1190_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_1190_FIRST_H
class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> chk{};

        for(char c : s){

            if(c == ')'){
                string temp = "";
                while(chk.top() != '('){
                    temp.push_back(chk.top());
                    chk.pop();

                }
                chk.pop();
                for(char x : temp){
                    chk.push(x);
                }
            }else{
                chk.push(c);
            }
        } // till here stack is in reverse
        string temp2 = "";
        while(!chk.empty()){
            temp2.push_back(chk.top()); // then here temp2 string is in straight form
            chk.pop();
        }
        reverse(temp2.begin(),temp2.end());  // if string is in reverse , then reverse it again
        return temp2;
    }
};