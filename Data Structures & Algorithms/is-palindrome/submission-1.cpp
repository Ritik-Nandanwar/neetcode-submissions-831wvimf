class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        string lowercase = "";
        for(auto &it:s){
            if(it >= 65 && it <= 90){
                it += 32;
                lowercase+=it;
            }
            else if(it >= 97 && it <= 122){
                lowercase += it;
            }
            else if(it - '0' >= 0 && it - '0' <= 9){
                lowercase += it;
            }
        }
        cout<<s<<endl;
        while(i<lowercase.size()/2){
            if(lowercase[i] != lowercase[lowercase.size()-1-i]){
                return false;
            }
            i++;
        }
        return true;
    }
};
