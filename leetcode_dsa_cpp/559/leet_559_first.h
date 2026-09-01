//
// Created by satyamchauhan on 01/09/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_559_FIRST_H
#define LEETCODE_DSA_CPP_LEET_559_FIRST_H

#endif //LEETCODE_DSA_CPP_LEET_559_FIRST_H
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if (root == nullptr) return {};

        int maxx = 0;
        for(Node * child : root->children){ // learned something new
            maxx = max(maxx,maxDepth(child));
        }
        return maxx + 1;
    }
};