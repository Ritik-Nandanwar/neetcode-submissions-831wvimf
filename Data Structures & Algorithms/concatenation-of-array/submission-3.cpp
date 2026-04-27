class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int times=2;
        while(times--){
            for(auto &it:nums){
                ans.push_back(it);
            }
        }
        return ans;
    }
};