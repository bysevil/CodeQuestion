// https://leetcode.cn/problems/same-tree/submissions/496853222/
#include<stdbool.h>
#include<stdio.h>

struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p == NULL && q == NULL)
        return true;
    if(p == NULL || q == NULL)
        return false;
    if(p->val != q->val)
        return false;
    
    bool right = isSameTree(p->left,q->left);
    bool left = isSameTree(p->right,q->right);

    return left && right;
}