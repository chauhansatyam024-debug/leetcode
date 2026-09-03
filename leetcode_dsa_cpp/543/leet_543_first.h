//
// Created by satyamchauhan on 03/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_543_FIRST_H
#define LEETCODE_DSA_CPP_LEET_543_FIRST_H
// wrong code , coz i didn't know they are some cases where maximum edges can be inside subtrees
// 101 / 106 , so close yet so far
#endif //LEETCODE_DSA_CPP_LEET_543_FIRST_H
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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        int x = leftt(root->left);
        int y = righty(root->right);
        return x + y;
    }
    int leftt(TreeNode * t1){
        if (t1 == nullptr) return 0;
        return 1 + max(leftt(t1->left) ,leftt(t1->right));
    }
    int righty(TreeNode * t2){
        if(t2 == nullptr) return 0;
        return 1 + max(righty(t2->left) , righty(t2->right));
    }




};