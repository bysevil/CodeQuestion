// https://leetcode.cn/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/
int subtractProductAndSum(int n){
    int sum = 0, ret = 1;
    while(n){
        int tmp = n % 10;
        sum += tmp;
        ret *= tmp;
        n /= 10;
    }
    return ret - sum;
}