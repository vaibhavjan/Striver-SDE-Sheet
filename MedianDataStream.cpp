class MedianFinder {
public:
    priority_queue<int> maxheap;
    priority_queue <int, vector<int>, greater<int> > minheap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
       if(maxheap.empty() || maxheap.top()>=num)
           maxheap.push(num);
        else
            minheap.push(num);
        if(maxheap.size()>minheap.size()+1){
            minheap.push(maxheap.top());
            maxheap.pop();
        }
        else if(maxheap.size()<minheap.size()){
             maxheap.push(minheap.top());
            minheap.pop();
        }
    }
    
    double findMedian() {
       if(maxheap.size()==minheap.size())
           return (maxheap.top()+minheap.top())/2.0;
        else
            return maxheap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */