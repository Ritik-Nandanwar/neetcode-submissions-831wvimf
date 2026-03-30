class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(vector<int> &it:matrix){
            int hi=it.size()-1,lo=0;
            // cout<<it.size();
            while(lo<=hi){
                int mid = (lo+hi)/2;
                cout<<"mid = "<<mid<<endl;
                if(it[mid] == target){
                    return true;
                }
                else if(it[mid] < target){
                    cout<<"lo => "<<lo<<endl;
                    lo = mid+1;
                }
                else if(it[mid] > target){
                    cout<<"hi => "<<hi<<endl;
                    hi = mid-1;
                }
            }
        }
        return false;//1 2 3 4 5 6 7
    }
};
