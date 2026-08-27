//
// Created by satyamchauhan on 28/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_101_FIRST_H
#define LEETCODE_DSA_CPP_LEET_101_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_101_FIRST_H
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
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return 1;

        return same(root->left,root->right);
    }
    bool same(TreeNode * t1 , TreeNode * t2){ // learn that we can make function in questions
        if(t1 == nullptr && t2 == nullptr) return true;
        if(t2 == nullptr || t1 == nullptr) return false;

        if(t1->val != t2->val) return false;

        return same(t1->left,t2->right) && same(t1->right,t2->left);
    }
};