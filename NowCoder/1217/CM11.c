// https://www.nowcoder.com/practice/0e27e0b064de4eacac178676ef9c9d70?tpId=8&&tqId=11004&rp=2&ru=/activity/oj&qru=/ta/cracking-the-coding-interview/question-ranking
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        if(pHead == nullptr) return nullptr;

        ListNode greaterHead(0);
        greaterHead.next = nullptr;
        ListNode lessHead(0);
        lessHead.next = nullptr;

        ListNode* greater = &greaterHead;
        ListNode* less = &lessHead;

        while(pHead){
            if(pHead->val < x){
                less->next = pHead;
                less = less->next;
            }else{
                greater->next = pHead;
                greater = greater->next;
            }
            pHead = pHead->next;
        }
        less->next = greaterHead.next;
        greater->next = nullptr;
        return lessHead.next;
    }
};