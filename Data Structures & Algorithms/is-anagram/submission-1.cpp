class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hmp(26,0);
        for(auto it:s){
            hmp[it-'a']++;
        }
        for(auto it:t){
            hmp[it-'a']--;
        }
        for(auto it:hmp){
            if(it != 0){
                return false;
            }
        }
        return true;
    }
};
