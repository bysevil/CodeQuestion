#include<stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
// https://leetcode.cn/problems/fan-zhuan-lian-biao-lcof/

//迭代
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* new = head;
    struct ListNode* old = NULL;
    
    while(new){
        head = head->next;
        new->next = old;
        old = new; 
        new = head;
    }
    return old;
}

// 递归
struct ListNode* reverseList(struct ListNode* head){
    if(head == NULL || head->next == NULL) return head;

    struct ListNode* newhead = reverseList(head->next);

    head->next->next = head;
    head->next = NULL;

    return newhead;
}

