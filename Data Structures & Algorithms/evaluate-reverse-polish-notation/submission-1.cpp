class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto token:tokens){
            if((token != "+" )&& (token != "-") && (token != "*") && (token != "/")){
                cout<<token<<" ";
                st.push(stoi(token));
            }
            if(token == "+"){
                int temp1 = st.top();st.pop();
                int temp2 = st.top();st.pop();
                st.push(temp1+temp2);
            }
            if(token == "-"){
                int temp1 = st.top();st.pop();
                int temp2 = st.top();st.pop();
                st.push(temp2-temp1);
            }
            if(token == "*"){
                int temp1 = st.top();st.pop();
                int temp2 = st.top();st.pop();
                st.push(temp1*temp2);
            }
            if(token == "/"){
                int temp1 = st.top();st.pop();
                int temp2 = st.top();st.pop();
                st.push(temp2/temp1);
            }
        }
        return st.top();
    }
};
