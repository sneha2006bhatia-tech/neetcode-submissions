class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int n=tokens.size();
        for(int i=0;i<n;i++){
            
            if(tokens[i]=="+"){
                int top=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                st.push(top+second);
            }
            else if(tokens[i]=="-"){
                int top=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                st.push(second-top);
            }
            else if(tokens[i]=="*"){
                int top=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                st.push(top*second);
            }
            else if(tokens[i]=="/"){
                int top=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                st.push(second/top);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
