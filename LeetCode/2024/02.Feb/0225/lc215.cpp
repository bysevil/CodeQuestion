// https://leetcode.cn/problems/kth-largest-element-in-an-array/description/


class Solution {
    void ADjustDown(vector<int>& nums, int parent,int k){
        int child = parent * 2 + 1;
        while(child < k){
            if(child+1 < k && nums[child+1] < nums[child]){
                child++;
            }
            if(nums[child] < nums[parent]){
                swap(nums[child], nums[parent]);
                parent = child;
                child = parent * 2 + 1;
            }else{
                break;
            }
        }
    }
public:
    int findKthLargest(vector<int>& nums, int k) {
        for(int i = k-1; i >= 0; i--){
            ADjustDown(nums,i,k);
        }
        for(int i = k; i < nums.size(); i++){
            if(nums[i] > nums[0]){
                swap(nums[i],nums[0]);
                ADjustDown(nums,0,k);
            }
        }
        return nums[0];
    }
};