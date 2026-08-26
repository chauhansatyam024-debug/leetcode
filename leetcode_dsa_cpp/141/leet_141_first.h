//
// Created by satyamchauhan on 27/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_141_FIRST_H
#define LEETCODE_DSA_CPP_LEET_141_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_141_FIRST_H
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
        if(head == nullptr|| head ->next == nullptr) return false;
        ListNode * fast = head;
        ListNode * slow = head;
        while(fast){
            if(fast->next == nullptr) return 0;
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast) return 1;
        }
        return 0;
    }
};