// https://www.nowcoder.com/practice/d281619e4b3e4a60a2cc66ea32855bfa?tpId=49&&tqId=29370&rp=1&ru=/activity/oj&qru=/ta/2016test/question-ranking
class PalindromeList {
public:
    bool chkPalindrome(ListNode* A) {
        // 寻找链表中点
        ListNode* fast = A;
        ListNode* slow = A;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        //逆置中点后的链表
        ListNode* prev = nullptr;
        ListNode* cur = slow;
        ListNode* next = slow;

        while(cur){
            next = next->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        //进行比较查看是否回文
        while(prev){
            if(prev->val != A->val){
                return false;
            }
            prev = prev->next;
            A = A->next;
        }

        return true;
    }
};