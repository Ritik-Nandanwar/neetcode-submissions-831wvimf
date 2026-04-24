class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> ss;
        int sizz = nums.size();
        for(auto it:nums){
            if(ss.find(it) != ss.end()){
                return it;
            }
            else{
                ss.insert(it);
            }
        }
        return -1;
    }
};
