class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        vector<int> ans;
        for(int i=0 ; i<nums.size() ; i++){
            mpp[nums[i]] = i;
        }
        for(int i=0 ; i<nums.size() ; i++){
            if(mpp[target-nums[i]] && i!=mpp[target-nums[i]]){
                cout<<"oui "<<i<<" -> "<<mpp[target-nums[i]]<<endl;
                ans.push_back(mpp[target-nums[i]]);
                ans.push_back(i);
                sort(ans.begin() , ans.end());
                break; 
            }
        }
        // for(auto it:mpp){
        //     cout<<it.first<<" -> "<<it.second<<endl;
        // }
        return ans;
    }
};
