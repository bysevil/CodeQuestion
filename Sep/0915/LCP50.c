// https://leetcode.cn/problems/WHnhjV/?envType=daily-question&envId=2023-09-15

#include<limits.h>

int giveGem(int* gem, int gemSize, int** operations, int operationsSize, int* operationsColSize){
    for(int i = 0; i < operationsSize; i++){
        int temp = gem[operations[i][0]]/2;
        gem[operations[i][0]] -= temp;
        gem[operations[i][1]] += temp;
    }
    int max = 0,min = INT_MAX;
    for(int i = 0; i < gemSize; i++){
        if(gem[i] > max) max = gem[i];
        if(gem[i] < min) min = gem[i];
    }
    return max - min;
}