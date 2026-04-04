class Solution {
public:
    int findMin(vector<int> &nums) {
        int minn = INT_MAX;
        for(auto it:nums){
            minn = min(minn , it);
        }
        return minn;
    }
};
