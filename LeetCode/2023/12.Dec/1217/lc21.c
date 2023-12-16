// https://leetcode.cn/problems/merge-two-sorted-lists/description/
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1 == NULL)
        return list2;
    if(list2 == NULL)
        return list1;

    struct ListNode head;
    struct ListNode* cur = &head;
    while(list1 && list2){
        if(list1->val > list2->val){
            cur->next = list2;
            list2 = list2->next;
        }else{
            cur->next = list1;
            list1 = list1->next;
        }
        cur = cur->next;
    }

    if(list1) 
        cur->next = list1;
    if(list2)
        cur->next = list2;

    return head.next;
}