// https://leetcode.cn/problems/remove-element/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cur,prev,ret,size;
        cur = prev = 0;
        ret = size = nums.size();
        
        while(cur < size){
            if(nums[cur] == val){
                ret--;
            }else{
                nums[prev++] = nums[cur];
            }
            cur++;
        }
        return ret;
    }
};