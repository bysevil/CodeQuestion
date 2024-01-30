// https://leetcode.cn/problems/path-sum/

bool _hasPothSum(struct TreeNode* root, int targetSum, int sum){
    if(root == NULL)
        return false;
    
    int tmp = sum + root->val;
    if(root->left == NULL && root->right == NULL){
        if(tmp == targetSum)
            return true;
        else
            return false;
    }

    bool left = _hasPothSum(root->left,targetSum,tmp);    
    bool right = _hasPothSum(root->right,targetSum,tmp);    

    return left || right;
}
bool hasPathSum(struct TreeNode* root, int targetSum) {
    return _hasPothSum(root,targetSum,0);
}