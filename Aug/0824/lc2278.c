#include<stdio.h>
#include<stdlib.h>
/*https://leetcode.cn/problems/percentage-of-letter-in-string/description/*/

int percentageLetter(char * s, char letter){
    size_t sSize = strlen(s);

    int sum = 0;

    for(int i = 0; i < sSize; i++) if (s[i] == letter)  sum++;

    return sum * 100 / sSize;
}