// https://leetcode.cn/problems/intersection-of-two-linked-lists/
 typedef struct ListNode Node;
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    Node* cur = headA;
    int lenA=0,lenB=0;
    while(cur){
        lenA++;
        cur = cur->next;
    }

    cur = headB;
    while(cur){
        lenB++;
        cur = cur->next;
    }

    Node* fast = headA,*slow = headB;
    if(lenA < lenB){
        fast = headB,slow = headA;
    }

    size_t i = abs(lenA-lenB);
    while(i--){
        fast = fast->next;
    }
    while(fast && slow){
        if(fast == slow){
            return fast;
        }
        fast = fast->next;
        slow = slow->next;
    }
    return NULL;
}