class Solution {
private:
    bool checkPal(string &s){
        int sizz = s.size(),idx=0;
        while(idx < sizz/2){
            if(s[idx] != s[sizz - idx-1]){
                return false;
            }
            idx++;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        if(checkPal(s)) return true;
        string rev = s;
        reverse(s.begin() , s.end());
        int sizz = s.size(),idx;
        bool mismatch=false;
        cout<<s<<endl;
        cout<<rev<<endl;
        for(int i=0 ; i<sizz ; i++){
            if(!mismatch && (s[i] != rev[i])){
                mismatch = true;
                cout<<"mismatch idx "<<i<<endl;
                idx=i;
                break;
            }
        }
        string new_s1="",new_s2="";
        for(int i=0 ; i<s.size() ; i++){
            if(i != idx) new_s1+=s[i];
            if(i != (s.size()-1-idx)) new_s2+=s[i];
        }
        return checkPal(new_s1) || checkPal(new_s2);
        // cout<<idx<<endl;
        // return true;
    }
};