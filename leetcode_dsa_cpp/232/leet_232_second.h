//
// Created by satyamchauhan on 03/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_232_SECOND_H
#define LEETCODE_DSA_CPP_LEET_232_SECOND_H
// 22/23 test case , int overflow error
#endif //LEETCODE_DSA_CPP_LEET_232_SECOND_H
class MyQueue {
public:
    stack<int> chk{};
    MyQueue() {

    }

    void push(int x) {
        chk.push(x);
    }

    int pop() {
        int num = 0;
        while(!chk.empty()){
            int top = chk.top();
            num = num * 10 +(top);
            chk.pop();
        }
        int temp = num%10;
        num = num /10;
        while(num){
            chk.push(num%10);
            num = num /10;
        }
        return temp ;
    }

    int peek() {
        long num = 0;
        while(!chk.empty()){
            int top = chk.top();
            num = num * 10 +(top);
            chk.pop();
        }
        int temp = num % 10;
        while(num){
            chk.push(num%10);
            num = num /10;
        }
        return temp;
    }

    bool empty() {
        if(chk.empty()){
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