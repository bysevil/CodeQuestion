/*https://leetcode.cn/problems/to-lower-case/description/*/
char * toLowerCase(char * s){
    int i = 0;
    while(s[i]){
        if(s[i] <= 'Z' && s[i] >= 'A') s[i] += 'a' - 'A'; 
        i++;
    }
    return s;
}