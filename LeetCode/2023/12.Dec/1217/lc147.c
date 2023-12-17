// https://leetcode.cn/problems/insertion-sort-list/
struct ListNode* insertionSortList(struct ListNode* head) {
    struct ListNode Head;
    Head.val = INT_MIN;
    Head.next = head;
    struct ListNode* cur = head;
    while (cur->next) {
        if (cur->next->val < cur->val) {
            struct ListNode* tmp = cur->next;
            struct ListNode* prev = &Head;
            cur->next = tmp->next;
            while (tmp->val > prev->next->val) {
                prev = prev->next;
            }
            tmp->next = prev->next;
            prev->next = tmp;
        }
        else {
            cur = cur->next;
        }
    }
    return Head.next;
}