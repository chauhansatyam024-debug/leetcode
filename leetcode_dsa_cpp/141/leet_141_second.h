//
// Created by satyamchauhan on 27/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_141_SECOND_H
#define LEETCODE_DSA_CPP_LEET_141_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_141_SECOND_H
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * fast = head;
        ListNode * slow = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast) return 1;
        }
        return 0;
    }
};