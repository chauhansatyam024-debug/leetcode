//
// Created by satyamchauhan on 30/08/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_144_FIRST_H
#define LEETCODE_DSA_CPP_LEET_144_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_144_FIRST_H
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

// really don't know how , but solved it , but i hv the feeling that it will get solved
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> res {};
        if(root == nullptr) return res;

        return traverse(root,res);
    }
    vector<int> traverse(TreeNode * t1 ,vector<int> &res){
        if(t1 != nullptr){
            res.push_back(t1->val);
        }
        else{
            return res;
        }
        if(t1->left != nullptr){
            traverse(t1->left,res);
        }
        if(t1->right != nullptr) traverse(t1->right,res);

        return res;

    }

};