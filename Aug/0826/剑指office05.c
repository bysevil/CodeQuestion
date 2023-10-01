// https://leetcode.cn/problems/ti-huan-kong-ge-lcof/

//创建字符串，遍历替换
char* replaceSpace(char* s){
    char* str = malloc(30000);
    int i = 0,j =0;
    while(s[i]){
        if(s[i] == ' '){
            str[j++] = '%';
            str[j++] = '2';
            str[j++] = '0';
        }else{
            str[j++] = s[i];
        }
        i++;
    }
    str[j] = '\0';
    return str;
}

//空间优化，不创建新字符串
char* replaceSpace(char* s){
    int len = strlen(s);
    int newlen = len;
    for(int i = 0; s[i]; i++){
        if(s[i] == ' ') newlen += 2;
    }

    s = realloc(s,newlen + 1);

    int newend = newlen;
    int end = len;

    while(newend != end){
        if(s[end] == ' '){
            s[newend--] = '0';
            s[newend--] = '2';
            s[newend--] = '%';
        }else{
            s[newend--] = s[end];
        }
        end--;
    }

    return s;
}
