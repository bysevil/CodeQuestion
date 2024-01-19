// https://leetcode.cn/problems/symmetric-tree/
#include<stdbool.h>
#include<stdio.h>

struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

bool IsSymmetric(struct TreeNode* LeftRoot, struct TreeNode* RightRoot){
    if(LeftRoot == NULL && RightRoot == NULL)
        return true;
    if(LeftRoot == NULL || RightRoot == NULL)
        return false;
    
    if(LeftRoot->val != RightRoot->val)
        return false;
    
    bool left = IsSymmetric(LeftRoot->left,RightRoot->right);
    bool right = IsSymmetric(LeftRoot->right,RightRoot->left);

    return left && right;
}
bool isSymmetric(struct TreeNode* root) {
    return IsSymmetric(root->left,root->right);
}