#include<stdbool.h>
// https://leetcode.cn/problems/count-asterisks/description/
int countAsterisks(char * s){
    int ans = 0;
    bool flag = true;
    while(*s){
        if(flag && *s == '*') ans++;
        else if(*s == '|') flag = !flag;
        s++;
    }
    return ans;
}