class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> mins;
        mins.push_back(prices[0]);
        int ans=0;
        for(int i=1 ; i<prices.size() ; i++){
            mins.push_back(min(prices[i] , mins[mins.size()-1]));
        }
        for(int i=0 ; i<prices.size() ; i++){
            ans = max(ans,prices[i]-mins[i]);
        }
        return ans;
    }
};
