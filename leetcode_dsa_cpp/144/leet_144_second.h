//
// Created by satyamchauhan on 30/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_144_SECOND_H
#define LEETCODE_DSA_CPP_LEET_144_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_144_SECOND_H
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
    void traverse(TreeNode * t1 , vector<int> &res){
        if(t1 == nullptr) return;
        res.push_back(t1->val);
        traverse(t1->left,res);
        traverse(t1->right,res);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res {};
        if(root == nullptr) return res;
        traverse(root,res);
        return res;
    }
};