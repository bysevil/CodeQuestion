// https://leetcode.cn/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof/description/
//暴力枚举
char* reverseLeftWords(char* s, int n){

    int len = strlen(s);
    char* str = malloc(len+1);

    int i;
    for(i = 0; i + n < len; i++){
        str[i] = s[i+n];
    }
    for(int j = 0; j < n; j++,i++){
        str[i] = s[j];
    }
    str[i] = '\0';
    return str;
}

//双指针反转
void reverse(char* left, char* right) {
    while(left < right){
        *left ^= *right;
        *right ^= *left;
        *left ^= *right;
        left++;right--;
    }
}

char* reverseLeftWords(char* s, int n){
    int len = strlen(s);
    reverse(s, s + n - 1);
    reverse(s + n, s+ len - 1);
    reverse(s, s + len - 1);
    return s;
}