class MinStack {
private:
    stack<long long>s;
    long long min;

public:
    MinStack() {
    
    }
    
    void push(int value) {
        if(s.empty()){
            s.push(0);
            min=value;
        }
        else{
            s.push(value-min);
            if (value<min) min=value;
        }
    }
    
    void pop() {
        if(s.empty()) return;
        long long top=s.top();
        s.pop();
        if(top<0){
            min=min-top;
        }
    }
    
    int top() {
        if(s.empty()) return -1;
        long long top=s.top();
        if(top>0)
            return (int)(min+top);
        else
            return (int)min;
               
    }
    
    int getMin() {
        if(s.empty()) return -1;
        return (int)min;
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