//
// Created by satyamchauhan on 03/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_543_SECOND_H
#define LEETCODE_DSA_CPP_LEET_543_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_543_SECOND_H
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
    int maxx =0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        hgt(root);
        return maxx;
    }
    int hgt(TreeNode * t1){
        if(t1 == nullptr) return 0;
        int lefty = hgt(t1->left);
        int righty = hgt(t1->right);
        maxx = max(maxx,lefty+righty);
        return 1 + max(lefty,righty);
    }
};