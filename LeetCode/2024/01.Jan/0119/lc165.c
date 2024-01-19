// https://leetcode.cn/problems/univalued-binary-tree/description/
#include<stdbool.h>
#include<stdio.h>

struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

bool _isUnivalTree(struct TreeNode* root,int val){
    if(root == NULL) 
        return true;
    if(root->val != val)
        return false;
    bool left = _isUnivalTree(root->left,val);
    bool right = _isUnivalTree(root->right,val);

    return left && right;
}
bool isUnivalTree(struct TreeNode* root) {
    if(root == NULL)
        return false;
    
    return _isUnivalTree(root,root->val);
}