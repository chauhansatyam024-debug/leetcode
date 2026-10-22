//
// Created by satyamchauhan on 22/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_2236_FIRST_H
#define LEETCODE_DSA_CPP_LEET_2236_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_2236_FIRST_H
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
    bool checkTree(TreeNode* root) {
        int sum = root->left->val + root->right->val;
        if(sum == root->val){
            return true;
        }
        return false;
    }
};