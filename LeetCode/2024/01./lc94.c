// https://leetcode.cn/problems/binary-tree-inorder-traversal/

void InOrder(struct TreeNode* Node, int* ans, int* returnSize){
    if(Node == NULL)
        return;

    InOrder(Node->left,ans,returnSize);
    ans[(*returnSize)++] = Node->val;
    InOrder(Node->right,ans,returnSize);
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* ans = malloc(sizeof(int) * 100);
    *returnSize = 0;
    InOrder(root,ans,returnSize);
    return ans;
}
