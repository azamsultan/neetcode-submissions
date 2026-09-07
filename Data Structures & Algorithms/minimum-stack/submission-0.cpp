class MinStack {
public:
    stack<int>s;
    stack<int>m;
    MinStack() {
    }
    
    void push(int val) {
        s.push(val);

        if(m.empty()||val<=m.top()){
            m.push(val);
        }
        
    }
    
    void pop() {
        if(s.top()==m.top()){
            m.pop();
        }
        s.pop();      
    }
    
    int top() {
        return s.top();
        
    }
    
    int getMin() {
        return m.top();       
    }
};
