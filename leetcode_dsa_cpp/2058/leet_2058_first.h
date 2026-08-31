//
// Created by satyamchauhan on 31/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_2058_FIRST_H
#define LEETCODE_DSA_CPP_LEET_2058_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_2058_FIRST_H
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> temp3{};
        ListNode* temp = head;
        int cnt = 1;
        while (temp->next && temp->next->next) {

            if (temp->next->val < temp->val &&
                temp->next->val < temp->next->next->val) {
                temp3.push_back(cnt);
                }
            else if (temp->next->val > temp->val &&
                temp->next->val > temp->next->next->val) {
                temp3.push_back(cnt);
                }
            cnt++;
            temp = temp->next;
        }
        if (temp3.size() < 2) {
            return {-1, -1};
        }
        int minDist = INT_MAX;
        for (int i = 0; i  < (int)temp3.size() -1; i++) {
            minDist = min(minDist, temp3[i + 1] - temp3[i]);
        }
        int maxDist = temp3.back() - temp3.front();

        return {minDist, maxDist};
    }
};