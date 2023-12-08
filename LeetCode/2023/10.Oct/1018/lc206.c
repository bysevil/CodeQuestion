#include<stdio.h>

struct ListNode{
    int val;
    struct ListNode* next;
};

//https://leetcode.cn/problems/reverse-linked-list/description/

struct ListNode* reverseList(struct ListNode* head){
    if(head == NULL) return NULL;
    struct ListNode* n1 =NULL;
    struct ListNode* n2 = head;
    while(n2){
        struct ListNode* n3 = n2->next;
        n2->next = n1;
        n1 = n2;
        n2 = n3;
    }
    return n1;
}