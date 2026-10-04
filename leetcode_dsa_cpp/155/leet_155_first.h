//
// Created by satyamchauhan on 04/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_155_FIRST_H
#define LEETCODE_DSA_CPP_LEET_155_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_155_FIRST_H
class MinStack {
public:
    stack<int> in{};
    stack<int> min_stack{};
    MinStack() {

    }

    void push(int value) {
        in.push(value);
        if(min_stack.empty()){
            min_stack.push(value);
        }
        else{
            min_stack.push(min(min_stack.top(),value));
        }
    }

    void pop() {
        in.pop();
        min_stack.pop();

    }

    int top() {
        return in.top();
    }

    int getMin() {
        return min_stack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */