// https://leetcode.cn/problems/first-unique-character-in-a-string/
int firstUniqChar(char * s){
    int hashtabs[26] = { 0 };
    for(int i = 0; s[i]; i++){
        hashtabs[s[i]-'a']++;
    }    
    for(int i = 0; s[i]; i++){
        if(hashtabs[s[i]-'a'] == 1) return i;
    }
    return -1;
}