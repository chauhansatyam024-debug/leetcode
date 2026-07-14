//
// Created by satyamchauhan on 13/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEETCODE_237_H
#define LEETCODE_DSA_CPP_LEETCODE_237_H
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
    void deleteNode(ListNode* node) {
        node -> val = node->next -> val;
        node -> next = node-> next ->next;
    }
};
#endif //LEETCODE_DSA_CPP_LEETCODE_237_H
