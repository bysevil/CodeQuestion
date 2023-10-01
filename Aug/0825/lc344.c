// https://leetcode.cn/problems/reverse-string/description/
void reverseString(char* s, int sSize){
    for(int i = 0; i < sSize - 1 - i; i++){
        s[i] ^= s[sSize - 1 - i];
        s[sSize - 1 - i] ^= s[i];
        s[i] ^= s[sSize - 1 - i];
    }
}