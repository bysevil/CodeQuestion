// https://leetcode.cn/problems/implement-stack-using-queues/
typedef struct {
    Queue* q1;
    Queue* q2;
} MyStack;


MyStack* myStackCreate() {
    MyStack* obj = malloc(sizeof(MyStack));
    obj->q1 = malloc(sizeof(Queue));
    obj->q2 = malloc(sizeof(Queue));
    QueueInit(obj->q1);
    QueueInit(obj->q2);
    return obj;
}

void myStackPush(MyStack* obj, int x) {
    QueuePush(obj->q1,x);
}

int myStackPop(MyStack* obj) {
    Queue* Pop = obj->q1, *Push = obj->q2;
    if(QueueEmpty(obj->q1)){
        Pop = obj->q2;
        Push = obj->q1;
    }
    while(QueueSize(Pop) > 1){
        QueuePush(Push,QueueFront(Pop));
        QueuePop(Pop);
    }
    int ans = QueueFront(Pop);
    QueuePop(Pop);
    return ans;
}

int myStackTop(MyStack* obj) {
    Queue* ans = obj->q1;
    if(QueueEmpty(obj->q1)){
        ans = obj->q2;
    }
    return QueueBack(ans);
}

bool myStackEmpty(MyStack* obj) {
    return QueueEmpty(obj->q1) && QueueEmpty(obj->q2);
}

void myStackFree(MyStack* obj) {
    QueueDestroy(obj->q1);
    QueueDestroy(obj->q2);
    free(obj);
}