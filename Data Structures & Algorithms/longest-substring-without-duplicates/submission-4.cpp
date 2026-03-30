class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(isspace(s[0]) || s.size() == 1) return 1; 
        set<char> ss;
        int i=0,j=1;
        int ans=0;
        ss.insert(s[i]);
        int siz = s.size();
        while(i<siz && j<siz){
            cout<<"i ,j = "<<i<<" "<<j<<" ";
            ans = max(ans , (int)ss.size());
            if(ss.find(s[j]) == ss.end()){
                while(ss.find(s[j]) == ss.end() && j<siz){
                    ss.insert(s[j]);
                    cout<<"inserted "<<s[j]<<endl;
                    ans = max(ans , (int)ss.size());
                    j++;
                }
            }
            else{
                cout<<"erased "<<s[i]<<endl;
                ss.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};
