class MinStack {
    stack<pair<int,int>>st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        
        if(st.empty()){
            st.push({val,val});
        }
        else{
        st.push({val,min(val,st.top().second)});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        int x=st.top().first;
        return x;
    }
    
    int getMin() {
        return st.top().second;
    }
};
