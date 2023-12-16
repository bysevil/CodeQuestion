// https://leetcode.cn/problems/remove-linked-list-elements/description/
struct ListNode* removeElements(struct ListNode* head, int val) {
    while(head){
        if(head->val == val){
            head = head->next;
        }else{
            break;
        }
    }

    if(head == NULL) return NULL;

    struct ListNode* prev = head;
    struct ListNode* cur = head->next;
    while(cur){
        if(cur->val == val){
            prev->next = cur->next;
            free(cur);
            cur = prev->next;
        }else{
            prev = cur;
            cur = cur->next;
        }
    }
    return head;
}