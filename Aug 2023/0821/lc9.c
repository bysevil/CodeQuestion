/*https://leetcode.cn/problems/palindrome-number/*/
#include<stdbool.h>

bool isPalindrome(int x){
    if(x < 0) return false;

    int tmp = x;
    long n = 0;

    while(tmp){
        n = n * 10 + tmp % 10;
        tmp /= 10;
    }

    return x == n;
}