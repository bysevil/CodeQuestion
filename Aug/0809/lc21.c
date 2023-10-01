/*https://leetcode.cn/problems/merge-two-sorted-lists/description/*/
#include<stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){

    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    struct ListNode* head = NULL;
    struct ListNode* p = head;

    while(list1 != NULL && list2 != NULL){
        if(head == NULL){
            head = list1->val > list2->val ? list2 : list1;
            p = head;
        }else{
            p->next = list1->val > list2->val ? list2 : list1;
            p = p->next;
        }

        if(list1->val > list2->val) list2 = list2->next;
        else list1 = list1->next;
    }

    if(list1 == NULL) p->next = list2;
    else p->next = list1;    
    
    return head;
}