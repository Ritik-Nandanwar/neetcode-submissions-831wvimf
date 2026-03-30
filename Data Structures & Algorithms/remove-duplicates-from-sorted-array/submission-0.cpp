class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> ss;
        for(auto it:nums) ss.insert(it);
        nums.assign(ss.begin() , ss.end());
        return ss.size();
    }
};