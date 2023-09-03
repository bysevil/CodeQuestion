// https://leetcode.cn/problems/remove-duplicates-from-sorted-array/description/
int removeDuplicates(int* nums, int numsSize){
    int ans = 0;
    for(int i = 1; i < numsSize; i++) {
        if(nums[ans] != nums[i]){
            nums[ans+1] = nums[i];
            ans++;
        }
    }
    return ans + 1;
}