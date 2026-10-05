//
// Created by satyamchauhan on 05/10/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_98_FIRST_H
#define LEETCODE_DSA_CPP_LEET_98_FIRST_H
// 59/89 ,  somme shit logic
#endif //LEETCODE_DSA_CPP_LEET_98_FIRST_H
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<long> lefty {};
    vector<long> righty{};
    bool isValidBST(TreeNode* root) {
        if (root == nullptr) {
            return false;
        }

        if (root->left) {
            lefty.push_back(root->val);
            for(long n : lefty){
                if(root->left->val >= n){
                    return false;
                }
            }
            isValidBST(root->left);
        }

        if (root->right) {
            righty.push_back(root->val);
            for(long n : lefty){
                if(root->right->val <= n){
                    return false;
                }
            }
            isValidBST(root->right);
        }

        return true;
    }
};