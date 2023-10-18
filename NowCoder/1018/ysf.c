struct ListNode{
    int val;
    struct ListNode* next;
};

//https://www.nowcoder.com/practice/41c399fdb6004b31a6cbb047c641ed8a

int ysf(int n, int m ) {
    // write code here
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->val = 1;
    struct ListNode* cur = head;
    for(int i = 2; i <= n;i++){
        cur->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        cur = cur->next;
        cur->val = i;
    }
    cur->next = head; 

    struct ListNode* prex = head;
    int flag = 1;
    while(cur->next != cur){
        if(flag == m){
            cur->next = prex->next;
            free(prex);
            prex = cur->next;
            flag = 1; 
        }else{
            cur = prex;
            prex = prex->next;
            flag++;
        }
    }
    int ans = prex->val;
    free(prex);
    return ans;
}