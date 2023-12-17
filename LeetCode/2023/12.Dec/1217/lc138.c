// https://leetcode.cn/problems/copy-list-with-random-pointer/description/
typedef struct Node Node;
struct Node* copyRandomList(struct Node* head) {
    if(head == NULL) return NULL;
    Node* cur = head;
	while(cur){
        Node* NewNode = malloc(sizeof(Node));
        NewNode->next = cur->next;
        NewNode->val = cur->val;
        cur->next = NewNode;
        cur = cur->next->next;
    }
    cur = head;
    while(cur){
        if(cur->random){
            cur->next->random = cur->random->next;  
        }else{
            cur->next->random = NULL;
        }
        cur = cur->next->next;
    }

    cur = head;
    Node* ans = head->next;
    while(cur){
        Node* tmp = cur->next->next;
        if(tmp){
            cur->next->next = tmp->next;  
        }else{
            cur->next->next = tmp;
        }
        cur->next = tmp;
        cur = tmp;
    }

    return ans;
}