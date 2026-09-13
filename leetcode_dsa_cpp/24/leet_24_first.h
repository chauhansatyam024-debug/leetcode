//
// Created by satyamchauhan on 13/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_24_FIRST_H
#define LEETCODE_DSA_CPP_LEET_24_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_24_FIRST_H
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
    ListNode* swapPairs(ListNode* head) {
        if(!head ) return nullptr;
        ListNode dummy(0);
        dummy.next = head;
        ListNode * temp = &dummy;

        while(temp->next && temp->next->next){
            ListNode * f = temp->next;
            ListNode * s = f->next;


            f->next = s->next; // direct assign next to second->next
            s->next = f; // direct assign next  to f
            temp->next = s; // starting head assigning ,  after 1st iteration it will move , for temp->next

            temp = f; // temp = first
        }



        return dummy.next;
    }
};