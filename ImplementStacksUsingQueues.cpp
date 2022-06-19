class MyStack {
public:
    queue<int> q;

    MyStack() {
        
    }
    
    void push(int x) {
            q.push(x);        
    }
    
    int pop() {
        int m=q.size();
        for(int i=1;i<m;i++)
        {
            q.push(q.front());
            q.pop();
        }
        int k=q.front();
        q.pop();
        return k;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */