// https://leetcode.cn/problems/add-to-array-form-of-integer/description/
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int cur = num.size() - 1;
        while (cur > -1) {
            k += num[cur];
            ans.push_back(k % 10);
            k /= 10;
            cur--;
        }
        while (k) {
            ans.push_back(k % 10);
            k /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};