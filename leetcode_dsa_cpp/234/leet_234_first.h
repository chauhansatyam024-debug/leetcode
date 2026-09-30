//
// Created by satyamchauhan on 29/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_234_FIRST_H
#define LEETCODE_DSA_CPP_LEET_234_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_234_FIRST_H
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

// 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr{};
        ListNode * temp = head;
        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int n = arr.size();
        for(int i = 0  ;i<n ; i++){
            if(arr[i] != arr[n-i-1]){
                return false;
            }
        }
        return true;
    }
};