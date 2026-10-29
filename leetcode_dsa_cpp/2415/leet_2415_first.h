//
// Created by satyamchauhan on 30/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_2415_FIRST_H
#define LEETCODE_DSA_CPP_LEET_2415_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_2415_FIRST_H
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
    TreeNode* reverseOddLevels(TreeNode* root) {
        rev(root->left,root->right,1);
        return root;
    }
    void rev(TreeNode * t1 ,TreeNode * t2, int level){
        if(t1 == nullptr || t2 == nullptr){
            return;
        }
        if(level % 2 == 1){
            swap(t1->val,t2->val);
        }
        rev(t1->left,t2->right,level+1);
        rev(t1->right,t2->left,level+1);

    }
};