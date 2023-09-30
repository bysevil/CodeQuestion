// https://leetcode.cn/problems/left-and-right-sum-differences/
// 枚举
int* leftRightDifference(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int* ans = calloc(numsSize, sizeof(int));

    int* leftsum = calloc(numsSize, sizeof(int));;
    int* rightsum = calloc(numsSize, sizeof(int));;

    leftsum[0] = nums[0]; rightsum[numsSize-1] = nums[numsSize-1];
    for(int i = 1; i < numsSize; i++){
        leftsum[i] = nums[i] + leftsum[i-1];
        rightsum[numsSize-1-i] = nums[numsSize-1-i] + rightsum[numsSize-i];
    }
    for(int i = 0; i < numsSize; i++){
        ans[i] = abs(leftsum[i] - rightsum[i]);
    }

    return ans;
}
//空间优化
int* leftRightDifference(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int* ans = calloc(numsSize, sizeof(int));

    int sum = 0;
    for(int i = 0; i < numsSize; i++){
        sum += nums[i];
    }

    int leftsum = 0;
    for(int i = 0; i < numsSize; i++){
        ans[i] = abs(sum - 2 * leftsum - nums[i]); 
        leftsum += nums[i];
    }

    return ans;
}