//
// Created by satyamchauhan on 26/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_100_FIRST_H
#define LEETCODE_DSA_CPP_LEET_100_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_100_FIRST_H
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr) return true;
        if(p == nullptr || q == nullptr) return false;
        return p->val == q-> val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};