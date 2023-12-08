// https://leetcode.cn/problems/letter-combinations-of-a-phone-number/
class Solution {
    vector<string> _alp = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
    vector<string> _ans;
    string _str;
    string _digits;
    void fun(int i) {
        if (i >= _digits.size()) {
            _ans.push_back(_str);
            return;
        }
        for (auto e : _alp[_digits[i] - '0']) {
            _str.push_back(e);
            fun(i + 1);
            _str.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits == "") return vector<string>{};
        _digits = digits;
        fun(0);
        return _ans;
    }
};