#include<stdbool.h>
/*https://leetcode.cn/problems/is-unique-lcci/*/
bool isUnique(char* astr){
    int flag = 0;
    while(*astr){
        int num = *astr - 'a';
        if(flag & (1 << num)) return false;
        else flag += 1 << num;
        astr++;
    }
    return true;
}