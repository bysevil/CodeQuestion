//https://leetcode.cn/problems/single-number/description/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int e : nums){
            ans ^= e;
        }
        return ans;
    }
};