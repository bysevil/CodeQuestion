// https://leetcode.cn/problems/pascals-triangle-ii/

int* getRow(int rowIndex, int* returnSize) {
    *returnSize = rowIndex + 1;
    int nums[*returnSize][*returnSize];
    for(int i = 0; i < *returnSize; i++)
        nums[i][0] = nums[i][i] = 1;
    
    for(int i = 2; i < *returnSize; i++)
        for(int j = 1; j < i; j++)
            nums[i][j] = nums[i-1][j-1] + nums[i-1][j];
    int* ans = malloc(*returnSize * sizeof(int));

    for(int i = 0; i < *returnSize; i++){
        ans[i] = nums[*returnSize - 1][i];
    }
    return ans;
}