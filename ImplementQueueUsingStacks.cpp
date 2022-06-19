class MyQueue {
public:
    
    stack<int> s1,s2;
    
    
    MyQueue() {
        s1=stack<int>();
        s2=stack<int>();
    }
    
    void push(int x) {
        
        s1.push(x);
        
    }
    
    int pop() {
        
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        int temp=s2.top();s2.pop();
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return temp;
    }
    
    int peek() {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        int temp=s2.top();
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return temp;
    }
    
    bool empty() {
        if(s1.empty()) return 1;
        return 0;
    }
};