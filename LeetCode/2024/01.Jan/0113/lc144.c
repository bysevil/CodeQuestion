// https://leetcode.cn/problems/binary-tree-preorder-traversal/description/

void PreOrder(struct TreeNode* Node, int* ans, int* returnSize){
    if(Node == NULL)
        return;

    ans[(*returnSize)++] = Node->val;
    PreOrder(Node->left,ans,returnSize);
    PreOrder(Node->right,ans,returnSize);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* ans = malloc(sizeof(int) * 100);
    *returnSize = 0;
    PreOrder(root,ans,returnSize);
    return ans;
}
