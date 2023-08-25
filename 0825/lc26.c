// https://leetcode.cn/problems/remove-duplicates-from-sorted-array/description/
int removeDuplicates(int* nums, int numsSize){
    int i = 0,j = 1;
    while(j < numsSize) {
        if(nums[j] != nums[i]){
            nums[i+1] = nums[j];
            i++;
        }
        j++;
    }
    return i + 1;
}