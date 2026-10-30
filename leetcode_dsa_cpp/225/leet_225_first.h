//
// Created by satyamchauhan on 31/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_225_FIRST_H
#define LEETCODE_DSA_CPP_LEET_225_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_225_FIRST_H
class MyStack {
public:
    queue<int> r1{};
    MyStack() {

    }

    void push(int x) {
        r1.push(x);
        for(int i = 0 ;i<r1.size()-1; i++){
            r1.push(r1.front());
            r1.pop();
        }
    }

    int pop() {
        int n = r1.front();
        r1.pop();
        return n;

    }

    int top() {

        return r1.front();
    }

    bool empty() {
        return r1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */