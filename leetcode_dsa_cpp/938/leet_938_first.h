//
// Created by satyamchauhan on 22/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_938_FIRST_H
#define LEETCODE_DSA_CPP_LEET_938_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_938_FIRST_H
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
    int result = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root){ return 0;}
        else if(root->val <= high && root->val >=low){
            result+=root->val;
        }
        rangeSumBST(root->left,low,high);
        rangeSumBST(root->right,low,high);

        return result;

    }

};