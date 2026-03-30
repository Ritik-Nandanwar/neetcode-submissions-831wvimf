class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        map<int,vector<int>> mpp;
        vector<int> ans;
        for(auto it:arr){
            mpp[abs(x-it)].push_back(it);
        }
        sort(arr.begin() , arr.end());
        for(auto it:mpp){
            cout<<it.first<<" -=> ";
            for(auto itt:it.second){
                cout<<itt<<" ";
            }
            cout<<endl;
            // 1 -=> 5 
            // 2 -=> 4 8 
            // 4 -=> 2 
        }
        for(auto it:mpp){
            for(auto itt:it.second){
                if(ans.size() < k){
                    ans.push_back(itt);
                } 
            }
        }
        sort(ans.begin() , ans.end());
        
        return ans;
    }
};