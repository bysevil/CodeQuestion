// https://leetcode.cn/problems/house-robber/?envType=daily-question&envId=2023-09-16

int rob(int* nums, int numsSize){
    if(numsSize == 1) return nums[0];
    else if(nums[0] > nums[1])
    for(int i = 2; i < numsSize; i++){
        nums[i] += nums[i-2];
        if(nums[i] < nums[i-1]) nums[i] = nums[i-1];
    }
    return nums[numsSize-1];
}