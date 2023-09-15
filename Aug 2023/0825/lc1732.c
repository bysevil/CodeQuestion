// https://leetcode.cn/problems/find-the-highest-altitude/description/
int largestAltitude(int* gain, int gainSize){
    int ans = 0,tmp = 0;
    for(int i = 0; i < gainSize; i++){
        tmp += gain[i];
        if(tmp > ans) ans = tmp;
    }
    return ans;
}