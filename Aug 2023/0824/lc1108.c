#include<stdio.h>
/*https://leetcode.cn/problems/defanging-an-ip-address/description/*/

char * defangIPaddr(char * address){
    size_t len = strlen(address);

    char* ans = (char*)calloc(len + 7, sizeof(char));

    int j = 0;
    for(int i = 0; i < len;i++){
        if(address[i] != '.') ans[j++] = address[i];
        else{
            ans[j++] = '[';
            ans[j++] = '.';
            ans[j++] = ']';
        }
    }
    ans[j] = '\0';
    return ans;
}