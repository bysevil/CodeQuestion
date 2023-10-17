// https://leetcode.cn/problems/sort-array-by-parity/description/
int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    int* left = nums;
    int* right = nums + numsSize - 1;

    int* end = right;
    while(left < right){
        *left ^= *right;
        *right ^= *left;
        *left ^= *right;

        while(!(*left & 1)){
            left++;
            if(left == end) break;
        }
        while(*right & 1){
            right--;
            if(right == nums) break;
        }
    }

    *returnSize = numsSize;
    return nums;
}