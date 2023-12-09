// https://leetcode.cn/problems/missing-number-lcci/description/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() + 1;
        int sum = n*(n-1)/2;
        for(int e : nums){
            sum -= e;
        }
        return sum;
    }
};