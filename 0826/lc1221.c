// https://leetcode.cn/problems/split-a-string-in-balanced-strings/description/
int balancedStringSplit(char * s){
    int flag = 0,ans = 0;
    while(*s){
        *s == 'L' ? flag++ : flag--;
        if(!flag) ans++;
        s++;
    }
    return ans;
}