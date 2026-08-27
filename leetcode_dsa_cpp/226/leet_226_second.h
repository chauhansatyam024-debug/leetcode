//
// Created by satyamchauhan on 28/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_226_SECOND_H
#define LEETCODE_DSA_CPP_LEET_226_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_226_SECOND_H
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
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return nullptr;
        swap(root->left,root->right); // learned somthing new
        invertTree(root->left);
        invertTree(root->right);
        return root;

    }
};