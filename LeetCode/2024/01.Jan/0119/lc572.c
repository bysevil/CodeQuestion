// https://leetcode.cn/problems/subtree-of-another-tree/
#include<stdio.h>
#include<stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool IsSubTree(struct TreeNode* root, struct TreeNode* subRoot){
    if(root == NULL && subRoot == NULL)
        return true;
    if(root == NULL || subRoot == NULL)
        return false;
    if(root->val != subRoot->val)
        return false;
    
    bool left = IsSubTree(root->left,subRoot->left);
    bool right = IsSubTree(root->right,subRoot->right);

    return left && right;
}

void PerOrder(struct TreeNode* root, struct TreeNode* subRoot, bool* ans){
    if(root == NULL || *ans)
        return;
    if(root->val == subRoot->val)
        *ans = IsSubTree(root,subRoot);
    
    PerOrder(root->left,subRoot,ans);
    PerOrder(root->right,subRoot,ans);
}

bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot){
    bool ans = false;
    PerOrder(root,subRoot,&ans);
    return ans;
}