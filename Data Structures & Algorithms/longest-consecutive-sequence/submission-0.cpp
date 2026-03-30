class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // sort(nums.begin() , nums.end());
        //[0,3,2,5,4,6,1,1] -> [0,1,1,2,3,4,5,6]
        set<int> ss(nums.begin() , nums.end());
        int ans=0;
        for(auto it:nums){
            if(ss.find(it-1) == ss.end()){
                int y=it+1;
                while(ss.find(y) != ss.end()){
                    y++;
                }
                ans = max(ans, y - it);
            }
        }
        return ans;
    }
};
