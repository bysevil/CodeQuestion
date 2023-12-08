//https://leetcode.cn/problems/reverse-string/

//使用迭代器不依赖算法库
class Solution {
public:
    void reverseString(vector<char>& s) {
        auto first = s.begin(),end = s.end()-1;
        while(first < end){
            *first ^= *end;
            *end ^= *first;
            *first ^= *end;
            first++;
            end--;
        }
    }
};
//使用下标遍历交换
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0,right = s.size() - 1;
        while(left < right){
            s[left] ^= s[right];
            s[right] ^= s[left];
            s[left] ^= s[right];
            left++;
            right--;
        }
    }
};
//使用swap函数和迭代器
class Solution {
public:
    void reverseString(vector<char>& s) {
        auto first = s.begin(),end = s.end()-1;
        while(first < end){
            swap(*first,*end);
            first++;
            end--;
        }
    }
};

//调用算法库中的reverse直接实现
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
    }
};