class MyQueue {
public:
    stack<int>input;
    stack<int>output;
    int peakelement=-1;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(input.empty()){
            peakelement=x;
        }
        input.push(x);
        
    }
    
    int pop() {
        if(output.empty()){
            // input -> output
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
       int x= output.top();
        output.pop();
        return x;
    }
    
    int peek() {
        if(output.empty()){
            return peakelement;
        }
        int peekele= output.top();
        return peekele;
        
    }
    
    bool empty() {
        if(input.empty() && output.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */