/*https://leetcode.cn/problems/find-the-pivot-integer/description/*/

//易知，肯定存在x，使得1~x和x~n相等，但x不一定是整数
//只需求出x验证出其为整型则符合题意
int pivotInteger(int n){
    int x = sqrt(n*(n+1)/2);
    if(x * x == n * (n + 1) / 2) return x;
    return -1;
}

int pivotInteger(int n){
    float x = sqrt(n*(n+1)/2);
    if((int)x == x) return x;
    return -1;
}