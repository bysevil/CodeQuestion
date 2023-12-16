// https://www.nowcoder.com/practice/529d3ae5a407492994ad2a246518148a?tpId=13&&tqId=11167&rp=2&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k ) {
    struct ListNode* slow = pListHead;
    struct ListNode* fast = pListHead;
    while(k-->0){
        if(fast == NULL)
            return NULL;
        fast = fast->next;
    }
    while(fast){
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}