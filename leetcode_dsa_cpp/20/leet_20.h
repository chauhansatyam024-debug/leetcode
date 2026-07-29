//
// Created by satyamchauhan on 30/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_20_H
#define LEETCODE_DSA_CPP_LEET_20_H

#endif //LEETCODE_DSA_CPP_LEET_20_H
bool isValid(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
                }
            st.pop();
        }
    }
    return st.empty();
}