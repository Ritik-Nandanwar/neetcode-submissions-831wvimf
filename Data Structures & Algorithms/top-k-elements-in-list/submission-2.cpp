class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<pair<int,int>>vp;
        for(auto &it : nums){
            mp[it]++;
        }
        for(auto it:mp){
            pair<int,int> pp = {it.second,it.first};
            vp.push_back(pp);
        }
        sort(vp.begin() , vp.end());
        reverse(vp.begin() , vp.end());
        for(auto it:vp){
            cout<<it.first<<" -> "<<it.second<<endl;
        }
        vector<int> ans;
        int i=0;
        for(int i=0 ; i<k ; i++){
            ans.push_back(vp[i].second);
            // k--;i++;
        }
        return ans;
    }
};
