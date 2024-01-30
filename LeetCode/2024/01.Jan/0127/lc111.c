// https://leetcode.cn/problems/minimum-depth-of-binary-tree/s

int minDepth(struct TreeNode* root) {
    if(root == NULL)
        return 0;    
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    if(left && right){
        return fmin(left,right) + 1;
    }
    if(left)
        return left + 1;
    if(right)
        return right + 1;
    return 1;
}