// https://leetcode.cn/problems/longest-substring-without-repeating-characters/description/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, ans = 0;
        while(j < s.size()){
            int flag = s.find(s[j],i);
            if(flag < j){
                i = flag + 1;
            }
            int len = j - i + 1;
            if(len > ans) {
                ans = len;
            }
            j++;
        }
        return ans;
    }
};