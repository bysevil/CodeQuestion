#include<stdbool.h>
// https://leetcode.cn/problems/kids-with-the-greatest-number-of-candies/
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    bool* ans = calloc(candiesSize, sizeof(bool));

    int max = 0;
    for(int i = 0; i < candiesSize; i++){
        if(candies[i] > max) max = candies[i];
    }

    for(int i = 0; i < candiesSize; i++){
        if(candies[i] + extraCandies >= max) ans[i] = true;
    }

    *returnSize = candiesSize;

    return ans;
}