// https://www.nowcoder.com/practice/4b91205483694f449f94c179883c1fef?tpId=60&&tqId=29483&rp=1&ru=/activity/oj&qru=/ta/tsing-kaoyan/question-ranking

#include <stdio.h>
#include <stdlib.h>

typedef struct BinaryTree{
    char data;
    struct BinaryTree* left;
    struct BinaryTree* right;
}BTNode;

BTNode* BuyBTNode(char ch){
    BTNode* NewNode = malloc(sizeof(BTNode));
    NewNode->data = ch;
    NewNode->left = NULL;
    NewNode->right = NULL;
    return NewNode;
}

BTNode* BinaryTreeCreate(){
    char ch = getchar();
    if(ch == '#' || ch == ' ')
        return NULL;
    BTNode* NewNode = BuyBTNode(ch);
    NewNode->left = BinaryTreeCreate();
    NewNode->right = BinaryTreeCreate();
    return NewNode;
}

void BinaryTreeInOrder(BTNode* Node){
    if(Node == NULL)
        return;
    BinaryTreeInOrder(Node->left);
    printf("%c ",Node->data);
    BinaryTreeInOrder(Node->right);
}

int main() {
    BTNode* root = BinaryTreeCreate();
    BinaryTreeInOrder(root);
    return 0;
}