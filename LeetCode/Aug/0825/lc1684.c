#include<stdbool.h>
// https://leetcode.cn/problems/count-the-number-of-consistent-strings/

//哈希数组
int countConsistentStrings(char * allowed, char ** words, int wordsSize){

    bool hashtabs[173] = { 0 };

    while(*allowed){
        hashtabs[*allowed] = true;
        allowed++;
    }

    int ans = 0;

    for(int i = 0; i < wordsSize; i++){
        int j = 0;
        bool flag = true;
        while(words[i][j] != '\0'){
            if(!hashtabs[words[i][j]]){
                flag = false;
                break;
            }
            j++;
        }
        if(flag) ans++;
    }

    return ans;
}

//位哈希
int countConsistentStrings(char * allowed, char ** words, int wordsSize){

    int hashtab = 0 ;

    while(*allowed){
        hashtab += 1 << *allowed - 'a';
        allowed++;
    }

    int ans = 0;

    for(int i = 0; i < wordsSize; i++){
        int j = 0;
        bool flag = true;
        while(words[i][j]){
            if(!(hashtab & 1 << words[i][j] - 'a')){
                flag = false;
                break;
            }
            j++;
        }
        if(flag) ans++;
    }

    return ans;
}