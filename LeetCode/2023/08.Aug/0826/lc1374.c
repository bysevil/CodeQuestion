// https://leetcode.cn/problems/generate-a-string-with-characters-that-have-odd-counts/description/
char * generateTheString(int n){
    char* ans = malloc(n + 1);
    ans[n] = '\0';
    if(n & 1) {
        memset(ans, 'a', n);
    }else{
        memset(ans, 'a', n - 1);
        ans[n-1] = 'b';
    }

    return ans;
}