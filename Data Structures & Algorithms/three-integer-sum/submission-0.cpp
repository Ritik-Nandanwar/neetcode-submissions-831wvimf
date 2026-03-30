class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> sa;
        int siz = nums.size();
        for(int i=0 ; i<siz ; i++){
            for(int j=0 ; j<siz ; j++){
                for(int k=0 ; k<siz ; k++){
                    if((i!=j && j!=k && i!=k) && (nums[i] + nums[j] + nums[k] == 0)){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        sort(temp.begin() , temp.end());
                        sa.insert(temp);
                    }
                }
            }
        }
        ans.assign(sa.begin() , sa.end());
        return ans;
    }
};
