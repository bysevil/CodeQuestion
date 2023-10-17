#include<stdint.h>
// https://leetcode.cn/problems/er-jin-zhi-zhong-1de-ge-shu-lcof/
int hammingWeight(uint32_t n) {
    int ans = 0;

    while(n){
        ans++;
        n = n & n - 1;
    }

    return ans;
}