class MinStack {
public:
stack<int>pq;

    MinStack() {
        
    }
    
    void push(int val) {
            pq.push(val);
    }
    
    void pop() {    
        pq.pop();
        
    }
    
    int top() {
        return pq.top();
    }
    
    int getMin() {
        stack<int>st;
        int mini=pq.top();
        while(pq.size()){
            mini=min(mini,pq.top());
            st.push(pq.top());
            pq.pop();
        }
        while(st.size()){
            pq.push(st.top());
            st.pop();
        }
        return mini;
    }
};
