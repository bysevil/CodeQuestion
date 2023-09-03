#include<stdbool.h>

// https://leetcode.cn/problems/check-if-strings-can-be-made-equal-with-operations-i/description/

bool canBeEqual(char* s1, char* s2){
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int flag1[26] = { 0 };
    int flag2[26] = { 0 };
    for(int i = 0; i < len1; i += 2){
        flag1[s1[i] - 'a']++;
        flag2[s2[i] - 'a']++; 
    }
    for(int i = 0; i < 26; i++){
        if(flag1[i] != flag2[i]) return false;
        flag1[i] = 0;
        flag2[i] = 0;
    }
    
    for(int i = 1; i < len1; i += 2){
        flag1[s1[i] - 'a']++;
        flag2[s2[i] - 'a']++; 
    }
    for(int i = 0; i < 26; i++){
        if(flag1[i] != flag2[i]) return false;
        flag1[i] = 0;
        flag2[i] = 0;
    }
    return true;
}