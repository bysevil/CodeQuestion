// https://leetcode.cn/problems/find-target-indices-after-sorting-array/description/

// 桶排序
int* targetIndices(int* nums, int numsSize, int target, int* returnSize){
    int hashtabs[100] = { 0 };
    while(numsSize--){
        hashtabs[nums[numsSize] - 1]++;
    }

    *returnSize = hashtabs[target-1];

    int* ans = calloc(*returnSize, sizeof(int));
    
    for(int i = 0; i < target - 1; i++){
        ans[0] += hashtabs[i];
    }
    for(int i = 1; i < *returnSize; i++) ans[i] = ans[i - 1] + 1;

    return ans;
}

// 贪心
int* targetIndices(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 0;
    int tmp = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] < target) tmp++;
        else if(nums[i] == target) (*returnSize)++;
    }

    int* ans = calloc(*returnSize,sizeof(int));

    for(int i = 0; i < *returnSize; i++){
        ans[i] = tmp + i;
    }

    return ans;
}
