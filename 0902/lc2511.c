// https://leetcode.cn/problems/maximum-enemy-forts-that-can-be-captured/description/?envType=daily-question&envId=2023-09-02

int captureForts(int* forts, int fortsSize){
    int ans = 0, num = -1,flag = 0;
    for(int i = 0; i < fortsSize; i++){
        if(forts[i] == -1){
            if(flag == 1){
                if(ans < num) ans = num;
                num = -1;
                flag = -1;
            }
            else if(flag == -1) num = -1;
            else flag = -1;
        }else if(forts[i] == 1){
            if(flag == -1){
                if(ans < num) ans = num;
                num = -1;
                flag = 1;
            }
            else if(flag == 1) num = -1;
            else flag = 1;
        }
        if(flag != 0) num++;
    }
    return ans;
}