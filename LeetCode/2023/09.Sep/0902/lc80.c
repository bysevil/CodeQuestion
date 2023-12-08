#include<stdbool.h>

// https://leetcode.cn/problems/remove-duplicates-from-sorted-array-ii/description/?envType=study-plan-v2&envId=top-interview-150

int removeDuplicates(int* nums, int numsSize){
    int ans = 0;
    bool flag = true;
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] == nums[ans]){
            if(flag){
                nums[ans + 1] = nums[i];
                ans++;
                flag = false;
            }
        }else{
            nums[ans + 1] = nums[i];
            ans++;
            flag = true;
        }
    }
    return ans + 1;
}

int removeDuplicates(int* nums, int numsSize){
    int ans = 0;
    if(numsSize < 3) return numsSize; 
    for(int i = 2; i < numsSize; i++) {
        if(nums[i] != nums[ans]){
            nums[ans + 2] = nums[i];
            ans++;
        }
    }
    return ans + 2;
}