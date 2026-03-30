class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // abb -> 1,2,0,0,0,....,0 -> "1200...0" => "12000...0"-["abb" ]//str-vector<str>
        // bab -> 1,2,0,0,0,....,0 -> "1200...0" => "12000...0"-["abb" , "bab"]
        map<string , vector<string>> mpp;
        for(auto it:strs){
            vector<int> vv(26,0);
            for(auto itt:it){
                vv[itt-'a']++;
            }
            string code = "";
            for(auto freq:vv){
                code += (char)(freq+'a');
            }
            mpp[code].push_back(it);
        }
        vector<vector<string>> ans;
        for(auto it:mpp){
            vector<string> inner;
            for(auto itt:it.second){
                inner.push_back(itt);
            }
            ans.push_back(inner);
        }
        return ans;
    }
};
