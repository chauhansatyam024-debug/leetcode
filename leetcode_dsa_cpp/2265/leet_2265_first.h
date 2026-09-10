//
// Created by satyamchauhan on 10/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_2265_FIRST_H
#define LEETCODE_DSA_CPP_LEET_2265_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_2265_FIRST_H
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
    int cnt = 0;
    int averageOfSubtree(TreeNode* root) {
        int sum = 0;
        int num = 0;
        avgs(root,sum,num);

        return cnt;
    }
    void avgs(TreeNode * t1 ,int &sum , int &num){
        if(!t1){
            sum = 0;
            num =0;
            return ;
        }
        int lsum = 0 , rsum = 0;
        int lnum = 0 , rnum =0;
        avgs(t1->left,lsum,lnum);
        avgs(t1->right,rsum,rnum);

        sum = lsum + rsum + t1->val;
        num = lnum + rnum + 1;
        if(sum/num == t1->val) cnt++;


    }
};