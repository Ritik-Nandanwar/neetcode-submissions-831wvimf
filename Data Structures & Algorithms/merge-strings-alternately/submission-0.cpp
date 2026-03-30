class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int siz1 = word1.size();
        int siz2 = word2.size();
        for(int i=0 ;i<min(siz1,siz2) ; i++){
            ans += word1[i];
            ans += word2[i];
        }
        if(siz1 > siz2){
            ans += word1.substr(min(siz1,siz2) , siz1-siz2);
        }
        if(siz2 > siz1)
            ans += word2.substr(min(siz1,siz2) , siz2-siz1);
        return ans;
    }
};