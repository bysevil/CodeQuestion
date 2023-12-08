#include<stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
// https://leetcode.cn/problems/he-bing-liang-ge-pai-xu-de-lian-biao-lcof/

//迭代
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){

    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;

    struct ListNode* ptr;
    struct ListNode* head;
    if(l1->val > l2->val) head = l2;
    else head = l1;

    while(l1 && l2){
        if(l1->val > l2->val){
            if(l2->next && l1->val > l2->next->val) l2 = l2->next;
            else{
                ptr = l2->next;
                l2->next = l1;
                l2 = ptr;
            }
        }else{
            if(l1->next && l2->val >= l1->next->val) l1 = l1->next;
            else{
                ptr = l1->next;
                l1->next = l2;
                l1 = ptr;  
            }         
        }
    }
    return head;
}

//递归
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){

    if(l1 == NULL) return l2;
    else if(l2 == NULL) return l1;
    else if(l1->val < l2->val) {
        l1->next = mergeTwoLists(l1->next,l2);
        return l1;
    }
    else {
        l2->next = mergeTwoLists(l1,l2->next);
        return l2;
    }
}