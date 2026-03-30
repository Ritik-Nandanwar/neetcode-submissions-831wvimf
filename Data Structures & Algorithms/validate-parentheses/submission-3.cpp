class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2) return false;
        stack<char> st;
        int i=0;
        while(i<s.size()){
            if(s[i] == '(' || s[i] == '[' ||  s[i] == '{'){
                st.push(s[i]);
                i++;
            }
            else if(!st.empty()){
                if(s[i] == ']' && st.top() == '['){
                    st.pop();
                }
                else if(s[i] == '}' && st.top() == '{'){
                    st.pop();
                }
                else if(s[i] == ')' && st.top() == '('){
                    st.pop();
                }
                else{
                    return false;
                }
                i++;
            }
            else{
                return false;
            }
        }
        return st.empty();
    }
};
