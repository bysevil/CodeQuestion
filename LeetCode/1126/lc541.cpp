//https://leetcode.cn/problems/reverse-string-ii/
class Solution {
public:
    string reverseStr(string s, int k) {
        auto left = s.begin();
        auto right = left + k;
        while(right < s.end()){
            reverse(left,right);
            right += 2*k;
            left += 2*k;
        }
        if(left < s.end()){
            reverse(left,s.end());
        }
        return s;
    }
};