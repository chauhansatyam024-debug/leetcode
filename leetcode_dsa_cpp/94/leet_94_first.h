//
// Created by satyamchauhan on 16/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_94_FIRST_H
#define LEETCODE_DSA_CPP_LEET_94_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_94_FIRST_H
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
    vector<int> inorder{};
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root) return {};
        inor(root);
        return inorder;
    }
    void inor(TreeNode * root){
        if(!root) return; // used void for return ; , so it just stop recursion
        if(root->left){inor(root->left);}
        inorder.push_back(root->val);
        if(root->right){inor(root->right);}

    }

};