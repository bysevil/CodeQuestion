// https://leetcode.cn/problems/add-two-numbers/description/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode ans;
        ListNode* cur = &ans;
        int k = 0;
        while(l1 && l2){
            k += l1->val + l2->val;
            cur->next = new ListNode( k % 10);
            k /= 10;
            cur = cur->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1){
            k += l1->val;
            cur->next = new ListNode( k % 10);
            k /= 10;
            cur = cur->next;
            l1 = l1->next;
        }
        while(l2){
            k += l2->val;
            cur->next = new ListNode( k % 10);
            k /= 10;
            cur = cur->next;
            l2 = l2->next;
        }
        if(k){
            cur->next = new ListNode( k % 10);
            cur = cur->next;
            cur->next = nullptr;
        }
        return ans.next; 
    }
};