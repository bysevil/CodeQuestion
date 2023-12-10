//https://leetcode.cn/problems/remove-duplicates-from-sorted-array/description/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto pos = nums.begin();
        while(pos != nums.end()-1){
            if(*pos == *(pos + 1)){
                pos = nums.erase(pos);
            }else{
                pos++;
            }
        }
        return nums.size();
    }
};