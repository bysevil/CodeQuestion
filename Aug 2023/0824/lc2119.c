#include<stdbool.h>
/*https://leetcode.cn/problems/a-number-after-a-double-reversal/description/*/

bool isSameAfterReversals(int num){
    return num == 0 || num % 10;
}