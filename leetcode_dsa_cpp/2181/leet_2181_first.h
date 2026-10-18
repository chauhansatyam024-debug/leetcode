//
// Created by satyamchauhan on 18/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_2181_FIRST_H
#define LEETCODE_DSA_CPP_LEET_2181_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_2181_FIRST_H
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
        ListNode * temp = head->next;
        vector<int> result{};
        int sum =  0;
        while(temp){
            if(temp->val == 0){
                result.push_back(sum);
                sum = 0;
            }
            else{
                sum+=temp->val;
            }
            temp = temp->next;

        }
        ListNode dummy(0);
        ListNode * nex = &dummy;
        for(int n : result){
            ListNode * newnode = new ListNode(n);
            nex->next = newnode;
            nex = newnode;
        }

        return dummy.next;

    }
};