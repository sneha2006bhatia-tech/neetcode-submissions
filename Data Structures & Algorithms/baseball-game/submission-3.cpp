class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int sum=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int top=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                st.push(second);
                st.push(top);
                st.push(top+second);
            }
            else if(operations[i]=="D"){
                st.push(2*st.top());
            }
            else if(operations[i]=="C"){
                st.pop();
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};