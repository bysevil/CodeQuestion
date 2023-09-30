// https://leetcode.cn/problems/form-smallest-number-from-two-digit-arrays/description/?envType=daily-question&envId=2023-09-05

int minNumber(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int hashtabs1[10] = { 0 };

    int min1 = 10;
    for(int i = 0; i < nums1Size; i++) {
        hashtabs1[nums1[i]]++;
        if (min1 > nums1[i]) min1 = nums1[i];
    }

    int flag = 10, min2 = 10;
    for(int i = 0; i < nums2Size; i++)
    {
        if(hashtabs1[nums2[i]] && flag > nums2[i]) flag = nums2[i];
        else if(min2 > nums2[i]) min2 = nums2[i];
    }

    if(flag < 10) return flag;
    else if(min1 > min2) return min2 * 10 + min1;
    else return min1 * 10 + min2;
}