#include<limits.h>

// https://leetcode.cn/problems/minimum-operations-to-make-a-special-number/description/

int minimumOperations(char* num){
    int len = strlen(num);
    int ans = INT_MAX;

    int flag1 = 0, flag2 = 0, flag3 = 0,flag4 = 0;
    for(int i = len-1; i >= 0; i--){
        if(num[i] == '2'){
            if(flag1) {
                flag1 = len - i - 2;
                if(ans > flag1) ans = flag1;
            }
        }
        else if(num[i] == '5'){
            if(flag1 == 0) flag1 = 1;
            if(flag2) {
                flag2 = len - i - 2;
                if(ans > flag2) ans = flag2;
            }
            if(flag3 == 0) flag3 = 1;
        }
        else if(num[i] == '0'){
            if(flag2 == 0) flag2 = 1;
            if(flag4 == 0) flag4 = 1;
            else if(flag4){
                flag4 = len - i - 2;
                if(ans > flag4) ans = flag4;
            }
        }
        else if(num[i] == '7'){
            if(flag3){
                flag3 = len - i - 2;
                if(ans > flag3) ans = flag3;
            }
        }
    }

    if(len == 2){
        if(ans == INT_MAX) {
            if(flag4) return 1;
            else return 2;
        }
    }else if(len == 1){
        if(num == '0') return 0;
        else return 1;
    }
    if(ans == INT_MAX){
        if(flag2) return len-1;
        else return len;
    }
    return ans;
}