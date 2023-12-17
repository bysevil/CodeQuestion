// https://leetcode.cn/problems/linked-list-cycle/description/
typedef struct ListNode Node;
bool hasCycle(struct ListNode *head) {
    Node* fast = head,*slow = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            return true;
        }
    }
    return false;
}