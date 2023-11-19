// https://leetcode.cn/problems/add-strings/description/
class Solution {
public:
    string addStrings(string num1, string num2) {
        int end1 = num1.size()-1, end2 = num2.size()-1;
        string ans;
        int next = 0;
        while(end1 >= 0 || end2 >= 0){
            int val1 = end1 >=0 ? num1[end1--] - '0' : 0;
            int val2 = end2 >=0 ? num2[end2--] - '0' : 0;
            int ret = val1 + val2 + next;
            ans += '0' + ret % 10;
            next = ret / 10;
        }
        if(next == 1) ans  += '1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};