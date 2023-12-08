struct ListNode{
    int val;
    struct ListNode* next;
};

// https://leetcode.cn/problems/merge-two-sorted-lists/

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* cur = head;
    while(list1 && list2){
        if(list1->val < list2->val){
            cur->next = list1;
            list1 = list1->next;
        }else{
            cur->next = list2;
            list2 = list2->next;
        }
        cur = cur->next;
       
    }
    if(list1) cur->next = list1;
    else cur->next =list2;
    cur = head->next;
    free(head);
    return cur;
}