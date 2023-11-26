//https://leetcode.cn/problems/reverse-words-in-a-string-iii/
class Solution {
public:
    string reverseWords(string s) {
        auto left = s.begin();
        auto right = left;
        while(right != s.end()){
            right = find(left,s.end(),' ');
            reverse(left,right);
            left = right + 1;
        }
        return s;
    }
};