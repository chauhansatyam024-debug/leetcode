//
// Created by satyamchauhan on 09/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_2_YT_TUTORIAL_H
#define LEETCODE_DSA_CPP_LEET_2_YT_TUTORIAL_H
// 5ms
#endif //LEETCODE_DSA_CPP_LEET_2_YT_TUTORIAL_H
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * l3 = new ListNode(0);
        ListNode * temp = l3;
        int carry = 0;
        while(l1 && l2){
            int add = (l1->val + l2->val) + carry;
            carry = add / 10;
            int val = add % 10;
            ListNode * addd = new ListNode(val);
            l3 ->next = addd;
            l1 = l1->next;
            l2 = l2->next;
            l3 = l3->next;
        }
        while(l1){
            int add = (l1->val ) + carry;
            carry = add / 10;
            int val = add % 10;
            ListNode * addd = new ListNode(val);
            l3 ->next = addd;
            l1 = l1->next;
            l3 = l3->next;
        }
        while(l2){
            int add = (l2->val ) + carry;
            carry = add / 10;
            int val = add % 10;
            ListNode * addd = new ListNode(val);
            l3 ->next = addd;
            l2 = l2->next;
            l3 = l3->next;
        }
        if(carry > 0){
            l3->next = new ListNode(carry);
        }


        return temp->next;
    }
};