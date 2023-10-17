// https://leetcode.cn/problems/count-symmetric-integers/description/

int countSymmetricIntegers(int low, int high){
    int ans = 0;
    for(int i = low; i <= high; i++){
        int left = 0,right = 0;
        if(i > 10 && i < 100){
            left = i % 10;
            right = i / 10;
            if(right == left) ans++;
        }
        else if(i > 1000 && i < 10000){
            int temp = i;
            left = temp % 10;
            temp /= 10;
            left += temp % 10;
            temp /= 10;
            right = temp % 10 + temp / 10;
            if(right == left) ans++;
        }
    }
    return ans;
}