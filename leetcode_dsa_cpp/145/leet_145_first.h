//
// Created by satyamchauhan on 05/11/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_145_FIRST_H
#define LEETCODE_DSA_CPP_LEET_145_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_145_FIRST_H
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
    vector<int> result{};
    vector<int> postorderTraversal(TreeNode* root) {
        if(root == nullptr){
            return {};
        }
        post(root);
        return result;
    }
    void post(TreeNode * t1){
        if(t1 == nullptr){
            return;
        }
        post(t1->left);
        post(t1->right);
        result.push_back(t1->val);
    }
};