// https://leetcode.cn/problems/merge-sorted-array/description/
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int flag = m + n - 1;
    m--;n--;
    while(m >= 0 && n >= 0){
        if(nums2[n] > nums1[m]) nums1[flag--] = nums2[n--];
        else nums1[flag--] = nums1[m--];
    }
    while(n >= 0){
        nums1[flag--] = nums2[n--];
    }
}