// https://leetcode.cn/problems/implement-stack-using-queues/submissions/504276692/

class MyStack {
    queue<int> q1;
    queue<int> q2;
    queue<int>* qPush;
    queue<int>* qPop;
public:
    MyStack()
        :qPush(&q1)
        ,qPop(&q2)
    {}
    
    void push(int x) {
        qPush->push(x);
    }
    
    int pop() {
        while(qPush->size() > 1){
            qPop->push(qPush->front()); 
            qPush->pop();
        }
        int ans = qPush->front();
        qPush->pop();
        swap(qPop,qPush);
        return ans;
    }
    
    int top() {
        return qPush->back();
    }
    
    bool empty() {
        return qPush->empty();
    }
};