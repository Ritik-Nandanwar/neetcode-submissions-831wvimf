// class Solution {
//     #include <string>
// public:
//     int calPoints(vector<string>& ops) {
//         int ans=0;
//         vector<int> av;
//         for(int i=0 ; i<ops.size() ; i++){
//             if(ops[i] == "+"){
//                 ans += av[av.size()-1];
//                 ans += av[av.size()-2];
//                 av.push_back(ans);
//             }
//             if(ops[i] == "C"){
//                 av.pop_back();
//             }
//             if(ops[i] == "D"){
//                 av.push_back(2*ans);
//             }
//             else{
//                 // int tmp = ops[i];
//                 // std::stringstream ss(tmp);
//                 // ss >> num;
//                 av.push_back(stoi(ops[i]));
//             }
//         } 
//         int ans2=0;
//         for(auto it:av) ans2+=it;
//         return ans2;
//     }
// };

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> stack;
        for (const string& op : operations) {
            if (op == "+") {
                int top = stack.back(); stack.pop_back();
                int newTop = top + stack.back();
                stack.push_back(top);
                stack.push_back(newTop);
            } else if (op == "D") {
                stack.push_back(2 * stack.back());
            } else if (op == "C") {
                stack.pop_back();
            } else {
                stack.push_back(stoi(op));
            }
        }
        return accumulate(stack.begin(), stack.end(), 0);
    }
};