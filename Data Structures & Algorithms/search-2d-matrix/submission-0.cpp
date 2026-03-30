class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto it:matrix){
            for(auto itt:it){
                if(itt == target){
                    return true;
                }
            }
        }
        return false;
    }
};
