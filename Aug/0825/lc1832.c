#include<stdbool.h>
// https://leetcode.cn/problems/check-if-the-sentence-is-pangram/
bool checkIfPangram(char * sentence){
    int flag = 0;
    while(*sentence){
        int tmp = 1 << *sentence - 'a';
        if(!(flag & tmp)) flag += tmp;
        sentence++;
    }
    
    if(flag == 67108863) return true;
    else return false;
}