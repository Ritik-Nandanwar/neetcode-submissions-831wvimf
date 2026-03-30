// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         vector<int> mins;
//         mins.push_back(prices[0]);
//         int ans=0;
//         for(int i=1 ; i<prices.size() ; i++){
//             mins.push_back(min(prices[i] , mins[mins.size()-1]));
//         }
//         for(int i=0 ; i<prices.size() ; i++){
//             ans = max(ans,prices[i]-mins[i]);
//         }
//         return ans;
//     }
// };


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_seen_till_now = INT_MAX;
        int l=0,r=1,ans=0,sizz=prices.size();
        while(r<sizz && l<r){
            min_seen_till_now = min(min_seen_till_now , prices[l]);
            ans = max(ans , prices[r]-min_seen_till_now);
            l++;r++;
        }
        return ans;
    }
};














