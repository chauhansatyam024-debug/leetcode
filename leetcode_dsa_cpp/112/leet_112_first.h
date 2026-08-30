//
// Created by satyamchauhan on 29/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_112_FIRST_H
#define LEETCODE_DSA_CPP_LEET_112_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_112_FIRST_H
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return false;
        if(root ->left == nullptr && root->right == nullptr){
            return root->val == targetSum;
        }
        int remaining = targetSum - root->val; 
        return hasPathSum(root->left,remaining) || hasPathSum(root->right,remaining);
    }
};