//https://leetcode.cn/problems/multiply-strings/description/
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1[0] == '0' || num2[0] == '0') return "0";
        string ans;
        ans.resize(num1.size() + num2.size() ,'0');
        int n = 0;
        for(auto i = num1.end()-1; i >= num1.begin(); i--){
            int num = 0;
            auto pos = ans.begin() + n++;
            for(auto j = num2.end()-1; j >= num2.begin(); j--){
                int n1 = *i - '0';
                int n2 = *j - '0';
                num += n1 * n2 + *pos - '0';
                *pos++ = num % 10 + '0';
                num /= 10;
            }
            *pos = num + '0';
        }

        while(*(ans.end()-1) == '0'){
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};