// https://leetcode.cn/problems/climbing-stairs/description/
int climbStairs(int n){
    if(n <= 2) return n;

    int ans = 3,a = 2,b = 1;

    for(int i = 2; i < n; i++){
        ans = a + b;
        b = a;
        a = ans;
    }

    return ans;
}