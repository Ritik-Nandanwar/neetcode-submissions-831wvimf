//TLE'd Brute
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int ans=0;
//         int win_siz=1;
//         int siz=nums.size();
//         while(win_siz <= siz){
//             cout<<"win_siz => "<<win_siz<<endl;
//             int temp_sum=0;
//             for(int i=0 ; i<win_siz ; i++){
//                 temp_sum += nums[i];
//             }
//             if(temp_sum == k){
//                 ans++;
//                 cout<<"loop 1 -> "<<temp_sum<<endl;
//             }
//             cout<<"------------------"<<endl;
//             for(int i=win_siz; i<siz ; i++){
//                 temp_sum += nums[i];
//                 temp_sum -= nums[i-win_siz];
//                 cout<<"loop 2 -> "<<temp_sum<<endl;
//                 if(temp_sum == k) ans++;
//             }
//             win_siz++;
//             cout<<endl;
//         }
//         return ans;
//     }
// };



class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prefix_sum;
        map<int,int> mpp;
        mpp.insert({0,1});
        int sum=0;
        int cnt=0;
        prefix_sum.push_back(nums[0]);
        for(int i=1 ; i<nums.size() ; i++){
            prefix_sum.push_back(prefix_sum[prefix_sum.size()-1]+nums[i]);
        }
        for(int i=0 ; i<nums.size() ; i++){
            // if(mpp[sum-k]){
                sum+=nums[i];
                cnt += mpp[sum-k];
            // }
            // else{
                mpp[sum]++;
            // }
        }
        return cnt;
    }
};

















