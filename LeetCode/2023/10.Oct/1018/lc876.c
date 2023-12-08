
struct ListNode{
    int val;
    struct ListNode* next;
};

//https://leetcode.cn/problems/middle-of-the-linked-list/

struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* old = head;
    struct ListNode* new = head;
    while(new && new->next){
        old = old->next;
        new = new->next->next;
    }
    return old;
}