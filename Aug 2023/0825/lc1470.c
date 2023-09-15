// https://leetcode.cn/problems/shuffle-the-array/
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    
    int* ans = (int*)calloc(numsSize,sizeof(int));

    for(int i = 0, j = 0; i < numsSize; i += 2,j++){
        ans[i] = nums[j];
        ans[i+1] = nums[j+n];
    }

    *returnSize = numsSize;
    return ans;
}