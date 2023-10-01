#include<stdio.h>
/*https://leetcode.cn/problems/single-number-iii/*/
int* singleNumber(int* nums, int numsSize, int* returnSize){
    int a = 0;
    for(int i = 0; i < numsSize; i++) a ^= nums[i];

    size_t flag = 1;
    while(!(flag & a)){
        flag <<= 1;
    }

    int* ans = (int*)calloc(2,sizeof(int));
    for(int i = 0; i < numsSize; i++){
        if(nums[i] & flag) ans[0] ^= nums[i];
        else ans[1] ^= nums[i];
    }
    *returnSize = 2;
    return ans;
}