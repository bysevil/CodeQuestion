// https://leetcode.cn/problems/form-smallest-number-from-two-digit-arrays/description/?envType=daily-question&envId=2023-09-05

int minNumber(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int hashtabs1[10] = { 0 };
    int hashtabs2[10] = { 0 };

    for(int i = 0; i < nums1Size; i++) hashtabs1[nums1[i]]++;

    int flag = 10;
    for(int i = 0; i < nums2Size; i++)
    {
        if(hashtabs1[nums2[i]] && flag > nums2[i]) flag = nums2[i];
        else hashtabs2[nums2[i]]++;
    }

    if(flag < 10) return flag;
    else{
        int a,b;
        for(int i = 0; i < 10; i++){
            if(hashtabs1[i] > 0) {
                a = i;
                break;
            }
        }
        for(int i = 0; i < 10; i++){
            if(hashtabs2[i] > 0) {
                b = i;
                break;
            }
        }
        if(a > b) return b * 10 + a;
        else return a * 10 + b;
    }
}