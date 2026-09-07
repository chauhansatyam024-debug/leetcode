//
// Created by satyamchauhan on 07/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_617_FIRST_H
#define LEETCODE_DSA_CPP_LEET_617_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_617_FIRST_H
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
//0ms
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == nullptr && root2 == nullptr) return nullptr;
        if (root1 == nullptr) return root2;
        if(root2 == nullptr) return root1;
        root1->val = root1->val + root2->val;
        root1->left =mergeTrees(root1->left,root2->left);  // root1->left = ,coz when nullptr in either tree come , it will not be assigned , so we hv to do that , so we can assign it
        root1->right = mergeTrees(root1->right,root2->right);

        return root1;

    }
};