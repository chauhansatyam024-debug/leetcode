//
// Created by satyamchauhan on 18/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_2181_SECOND_H
#define LEETCODE_DSA_CPP_LEET_2181_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_2181_SECOND_H
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode * curr = head->next;
        ListNode * nex = head;
        int sum = 0;
        while(curr){
            if(curr->val != 0){
                sum+=curr->val;
            }
            else{
                nex->val = sum;
                nex->next = curr->next;
                nex = curr->next;
                sum = 0;
            }
            curr = curr->next;
        }
        return head;
    }
};