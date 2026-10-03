//
// Created by satyamchauhan on 03/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_232_FIRST_H
#define LEETCODE_DSA_CPP_LEET_232_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_232_FIRST_H
class MyQueue {
public:
    stack<int> chk{};
    stack<int> se{};
    MyQueue() {

    }

    void push(int x) {
        chk.push(x);
    }

    int pop() {
        int val = peek();
        se.pop();
        return val;

    }

    int peek() {
        if(se.empty()){
            while(!chk.empty()){
                int top = chk.top();
                se.push(top);
                chk.pop();
            }
        }
        return se.top();
    }

    bool empty() {
        if(chk.empty() && se.empty()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */