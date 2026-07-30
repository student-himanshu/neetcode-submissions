class MinStack {
        vector<int>st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
    }
    
    void pop() {
        if(!st.empty()){
            st.pop_back();
        }
    }
    
    int top() {
        if(!st.empty()){
            return st.back();
        }
        return -1;

    }
    
    int getMin() {
        int minval=INT_MAX;
        for(int i=0;i<st.size();i++){
            minval=min(minval,st[i]);
        }
        return minval;
    }
};
