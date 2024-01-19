// https://leetcode.cn/problems/balanced-binary-tree/
#include<stdbool.h>
#include<stdio.h>

struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

int PostOrder(struct TreeNode* root,bool* ans){
    if(root == NULL || *ans == false)
        return 0;
    
    int left = PostOrder(root->left,ans);
    int right = PostOrder(root->right,ans);

    if(abs(left - right) > 1)
        *ans = false;
    
    return fmax(left,right) + 1;
}

bool isBalanced(struct TreeNode* root) {
    bool ans = true;
    PostOrder(root,&ans);
    return ans;
}