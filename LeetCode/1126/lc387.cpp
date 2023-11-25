//https://leetcode.cn/problems/first-unique-character-in-a-string/description/
class Solution {
public:
    int firstUniqChar(string s) {
        array<int,26> ary; ary.fill(0);
        for(auto e : s) ary[e-'a']++;
        for(int i = 0; i < s.size(); i++){
            if(ary[s[i] - 'a'] == 1) return i;
        }
        return -1;
    }
};