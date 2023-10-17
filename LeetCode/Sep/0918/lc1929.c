//https://leetcode.cn/problems/concatenation-of-array/description/

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    nums= (int*)realloc(nums, 2 * numsSize * sizeof(int));
    memmove(nums + numsSize, nums, numsSize * sizeof(int));
    *returnSize = numsSize * 2;
    return nums;
}
