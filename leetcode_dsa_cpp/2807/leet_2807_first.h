//
// Created by satyamchauhan on 06/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_2807_FIRST_H
#define LEETCODE_DSA_CPP_LEET_2807_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_2807_FIRST_H
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
// 4ms
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode * temp = head;
        while(temp ->next){
            int gcdd = static_cast<int>(gcd(temp->val,temp->next->val));
            ListNode * temp2 = temp->next;
            ListNode * newnode = new ListNode(gcdd);
            temp->next = newnode;
            newnode->next = temp2;
            temp = temp2;

        }
        return head;
    }
};