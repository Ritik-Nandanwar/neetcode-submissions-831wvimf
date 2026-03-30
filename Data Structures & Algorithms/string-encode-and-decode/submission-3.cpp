class Solution {
public:

    string encode(vector<string>& strs) {
        vector<int> lens;
        string str = "";
        for(auto it:strs){
            lens.push_back(it.size());
        }
        for(int i=0 ; i<strs.size() ; i++){
            str += '.';
            // str += to_string(lens[i]);
            str += strs[i];
            str += '.';
        }
        // str += '?';
        cout<<str<<endl; //#5#Hello#5#World?
        return str;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        for(int i=0 ; i<s.size() ;i++){
            if(s[i] == '.'){
                string temp="";
                while(s[++i] != '.'){
                    temp += s[i];
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
