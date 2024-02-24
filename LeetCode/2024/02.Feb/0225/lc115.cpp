//https://leetcode.cn/problems/min-stack/

class MinStack {
    stack<int> _Min;
    stack<int> _data;
public:
    void push(int val) {
        _data.push(val);
        if(_Min.empty()){
            _Min.push(val);
        }
        else{
            _Min.push(fmin(_Min.top(),val));
        }
    }
    
    void pop() {
        _data.pop();
        _Min.pop();
    }
    
    int top() {
        return _data.top();
    }
    
    int getMin() {
        return _Min.top();
    }
};
