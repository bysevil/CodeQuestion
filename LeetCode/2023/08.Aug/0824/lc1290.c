struct ListNode {
    int val;
    struct ListNode *next;
};
/*https://leetcode.cn/problems/convert-binary-number-in-a-linked-list-to-integer/description/*/
int getDecimalValue(struct ListNode* head){
    int num = 0;
    while(head){
        num = (num << 1) + head->val;
        head = head->next;
    }
    return num;
}