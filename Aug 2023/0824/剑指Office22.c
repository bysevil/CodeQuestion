struct ListNode { 
    int val;
    struct ListNode *next;
};
/*https://leetcode.cn/problems/lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof/description/*/
struct ListNode* getKthFromEnd(struct ListNode* head, int k){
    struct ListNode* p = head;
    for(int i = 1; i < k; i++){
        p = p->next;
    }
    while(p = p->next){
        head = head->next;
    }
    return head;
}