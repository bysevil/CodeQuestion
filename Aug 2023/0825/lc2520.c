// https://leetcode.cn/problems/count-the-digits-that-divide-a-number/
int countDigits(int num){
    int copy_num = num, ans = 0;
    while(copy_num){
        int tmp = copy_num % 10;
        if(num % tmp == 0) ans++;
        copy_num /= 10;
    }
    return ans;
}