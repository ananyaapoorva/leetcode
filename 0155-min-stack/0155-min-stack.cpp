class MinStack {
private:
    stack<int>s1;
    stack<int>minSt;

public:
    MinStack() {
    
    }
    
    void push(int value) {
        s1.push(value);
        if(minSt.size()==0){
            minSt.push(value);
        }
        else if((minSt.top()>value)||(minSt.top()==value)){
            minSt.push(value);
        }  
    }
    
    void pop() {
        int top=s1.top();
        s1.pop();
        if(minSt.top()==top){
            minSt.pop();
        }
    }
    
    int top() {
        return s1.top();        
    }
    
    int getMin() {
        return minSt.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */