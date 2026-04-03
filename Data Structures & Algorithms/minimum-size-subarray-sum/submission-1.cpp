class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        int siz = nums.size();
        int sum = 0;
        int l=0,r=0;
        for(int r=0 ; r<siz ; r++){
            sum += nums[r];
            while(sum >= target){
                ans = min(ans , r-l+1);
                sum -= nums[l++];
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};