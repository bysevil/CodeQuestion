// https://leetcode.cn/problems/reverse-linked-list/description/
struct ListNode* reverseList(struct ListNode* head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    struct ListNode* next = head;

    while(next){
        next = next->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}