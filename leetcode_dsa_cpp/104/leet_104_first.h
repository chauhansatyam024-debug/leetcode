//
// Created by satyamchauhan on 27/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_104_FIRST_H
#define LEETCODE_DSA_CPP_LEET_104_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_104_FIRST_H
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
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return 1 + max(left,right);

    }
};