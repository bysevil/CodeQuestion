#include<stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
 
//https://leetcode.cn/problems/remove-linked-list-elements/description/

struct ListNode* removeElements(struct ListNode* head, int val) {
    while (head) {
        if (head->val == val) head = head->next;
        else break;
    }
    if (head == NULL) return NULL;

    struct ListNode* LNnew = head->next;
    struct ListNode* LNold = head;
    while (LNnew) {
        if (LNnew->val == val) {
            LNold->next = LNnew->next;
        }else{
            LNold = LNold->next;
        }
        LNnew = LNnew->next;
    }
    return head;
}