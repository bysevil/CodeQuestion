//https://leetcode.cn/problems/valid-palindrome/description/
class Solution {
public:
    bool isPalindrome(string s) {
        auto first = s.begin();
        while(first < s.end()){
            if(!isalnum(*first)) 
                s.erase(first);
            else *first++ = tolower(*first);
        }
        auto left = s.begin(), right = s.end()-1;
        
        while(left < right){
            if(*left != *right) 
                return false;
            left++; right--;
        }
        return true;
    }
};