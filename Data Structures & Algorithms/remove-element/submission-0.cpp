class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        vector<int> ans;
        for(auto it:nums){
            if(it != val){
                ans.push_back(it);
                cnt++;
            }
        }
        nums.assign(ans.begin() , ans.end());
        return cnt;
    }
};