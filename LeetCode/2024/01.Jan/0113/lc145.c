// https://leetcode.cn/problems/binary-tree-postorder-traversal/
void PostOrder(struct TreeNode* Node, int* ans, int* returnSize){
    if(Node == NULL)
        return;

    PostOrder(Node->left,ans,returnSize);
    PostOrder(Node->right,ans,returnSize);
    ans[(*returnSize)++] = Node->val;
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* ans = malloc(sizeof(int) * 100);
    *returnSize = 0;
    PostOrder(root,ans,returnSize);
    return ans;
}
