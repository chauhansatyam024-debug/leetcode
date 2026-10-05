//
// Created by satyamchauhan on 05/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_98_SECOND_H
#define LEETCODE_DSA_CPP_LEET_98_SECOND_H

#endif //LEETCODE_DSA_CPP_LEET_98_SECOND_H
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
    bool isValidBST(TreeNode* root) {
        return check(root,LLONG_MIN ,LLONG_MAX);
    }
    bool check(TreeNode * root , long long low , long long high){
        if(root == nullptr){return true;}
        if(root->val <= low || root->val >= high){return false;}

        return check(root->left,low,root->val) && check(root->right,root->val,high);



    }
};