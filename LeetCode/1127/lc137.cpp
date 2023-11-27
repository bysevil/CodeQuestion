//https://leetcode.cn/problems/single-number-ii/description/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> hash;
        for (int num: nums) {
            hash[num]++;
        }
        for (auto [num, occ]: hash) {
            if (occ == 1) return num;
        }
        return 0;
    }
};
