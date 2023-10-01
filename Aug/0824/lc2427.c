/*https://leetcode.cn/problems/number-of-common-factors/description/*/
int commonFactors(int a, int b){
    while(b){
        a %= b;
        a ^= b;
        b ^= a;
        a ^= b;
    }

    int ans = 0;
    for(int i = 2;i*i <= a; i++){//1是所有正整数的因数，不需判断。，同时a本身也是本身的因数。所以结果应加2.
        if(a % i == 0) {
            ans++;
        }
    }//当i为a的因数时，a/i也是a的因数。
    //所以返回 2*ans;
    //但要考虑到i*i == a,此时a/i == i为其本身，所以不能乘以2
    float tmp = sqrt(a);
    if(tmp == (int)tmp){
        return 2 * ans + 1;//当sqrt(a)不是浮点数，所以存在i*i == a.且被乘以2了。所以结果-1.
    }else{
        return 2 * ans + 2;
    }
}