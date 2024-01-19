// https://leetcode.cn/problems/maximum-depth-of-binary-tree/description/
#include<stdio.h>

struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

int maxDepth(struct TreeNode* root) {
    if(root == NULL)
        return 0;
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return fmax(left,right) + 1;
}