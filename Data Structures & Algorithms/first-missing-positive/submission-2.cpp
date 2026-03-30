class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> ss;
        int ans;
        int maxx=INT_MIN;
        for(auto it:nums){
            maxx = max(maxx , it);
            ss.insert(it);
        }
        for(auto it:ss){
            cout<<it<<" ";
        }
        for(int i=1 ; i<=maxx+1 ; i++){
            if(ss.find(i) == ss.end()){
                ans = i;
                break;
            }
        }
        if(maxx == 0) return 1;
        return ans;
    }
};