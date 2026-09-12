//
// Created by satyamchauhan on 12/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_23_FIRST_H
#define LEETCODE_DSA_CPP_LEET_23_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_23_FIRST_H
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> store{};
        ListNode * head = nullptr;

        for(int i = 0 ; i<lists.size() ; i++){
            ListNode * curr = lists[i];
            while(curr){
                store.push_back(curr->val);
                curr = curr->next;
            }

        }
        if(store.empty()) {return nullptr;} // for casses where link is empty
        sort(store.begin() , store.end());
        head = new ListNode(store[0]);
        ListNode * temp = head;
        for(int i = 1 ; i<store.size() ; i++){
            temp->next = new ListNode(store[i]);
            temp = temp->next;
        }
        return head;
    }
};