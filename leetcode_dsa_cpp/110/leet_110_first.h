//
// Created by satyamchauhan on 29/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_110_FIRST_H
#define LEETCODE_DSA_CPP_LEET_110_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_110_FIRST_H
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
    int maxheight(TreeNode * root){
        if(!root) return 0;
        return 1 + max(maxheight(root->left), maxheight(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        int lef = maxheight(root->left);
        int righ = maxheight(root->right);
        int hb = abs(lef - righ);
        if(hb > 1) return false;

        return isBalanced(root->left) && isBalanced(root->right);

    }
};