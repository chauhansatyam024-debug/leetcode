//
// Created by satyamchauhan on 30/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_82_FIRST_H
#define LEETCODE_DSA_CPP_LEET_82_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_82_FIRST_H
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        unordered_map<int, int> freq{};
        while (temp) {
            freq[temp->val]++;
            temp = temp->next;

        }
        ListNode dummy(0);
        ListNode * tail = &dummy;

        temp = head;
        while(temp){
            if(freq[temp->val] < 2){
                tail->next = new ListNode(temp->val);
                tail = tail->next;
            }
            temp = temp->next;
        }
        return dummy.next;
    }
};