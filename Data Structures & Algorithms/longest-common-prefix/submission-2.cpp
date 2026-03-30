class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string ans = strs[0];
        int sizz = strs.size();
        for(int i=1 ; i<sizz ; i++){
            int idx=0;
            while(idx < strs[i].size() && strs[i][idx] == ans[idx]){
                idx++;
            }
            ans = ans.substr(0, idx);
        }
        return ans;
    }
};