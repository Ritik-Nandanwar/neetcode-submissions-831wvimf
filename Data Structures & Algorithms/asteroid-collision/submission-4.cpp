// class Solution {
// public:
//     vector<int> asteroidCollision(vector<int>& ast) {
//         vector<int> ans;
//         int i=0, siz = ast.size();
//         stack<int> st;
//         while(i<siz){
//             if(ast[i] > 0){
//                 st.push(ast[i]);
//                 i++;
//             }
//             else if(ast[i] < 0){
//                 if(st.size()){
//                     if(abs(st.top()) < abs(ast[i])){
//                         while(!st.empty() && (abs(st.top()) < abs(ast[i]))){
//                             st.pop();
//                         }
//                     }
//                     else{
//                         i++;
//                     }
//                     if(st.size()){
//                         if(abs(st.top()) > abs(ast[i])){
//                             i++;
//                         }
//                     }
//                 }
//             }
//         }
//         if(st.size()){
//             while(!st.empty()){
//                 ans.push_back(st.top());
//                 st.pop();
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        vector<int> ans;
        int i = 0, siz = ast.size();
        stack<int> st;

        while(i < siz) {
            int curr = ast[i];
            bool destroyed = false;

            // collision only when stack top is +ve and current is -ve
            while(!st.empty() && st.top() > 0 && curr < 0) {
                if(st.top() < -curr) {
                    st.pop(); // stack asteroid destroyed
                }
                else if(st.top() == -curr) {
                    st.pop(); // both destroyed
                    destroyed = true;
                    break;
                }
                else {
                    destroyed = true; // current destroyed
                    break;
                }
            }

            if(!destroyed) {
                st.push(curr);
            }

            i++;
        }

        // build answer from stack
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};