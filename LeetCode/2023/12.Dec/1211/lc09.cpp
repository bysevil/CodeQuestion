// https://leetcode.cn/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> num;
        if(x < 0) return false;
        do{
            num.push_back(x % 10);
            x /= 10;
        }while(x);
        auto prev = num.begin();
        auto cur = num.end()-1;
        while(prev < cur){
            if(*prev != *cur){
                return false;
            }
            prev++;
            cur--;
        }
        return true;
    }
};