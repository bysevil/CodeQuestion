// https://leetcode.cn/problems/alternating-digit-sum/
int alternateDigitSum(int n){
    int ans = 0,flag = 1;

    while(n){
        ans += flag * n % 10;
        n /= 10;
        flag = -flag;
    }
    return -flag * ans;
}