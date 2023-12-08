// https://leetcode.cn/problems/merge-strings-alternately/description/
char * mergeAlternately(char * word1, char * word2){
    char* ans = malloc(201);
    char *ptr = ans;

    while(*word1 || *word2){
        if(*word1) *ptr++ = *word1++;
        if(*word2) *ptr++ = *word2++;
    }
    *ptr = '\0';

    return ans;
}