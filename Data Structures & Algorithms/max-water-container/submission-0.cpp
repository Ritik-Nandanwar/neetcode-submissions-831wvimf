class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxx = INT_MIN;
        int sizz = heights.size();
        for(int i=0 ; i<sizz ; i++){
            for(int j=0 ; j<sizz ; j++){
                // cout<<"i = "<<i<<", j = "<<j<<" -> "<<min(heights[j],heights[i])<<" "<<abs(j-i)<<endl;
                maxx = max(maxx , (min(heights[j],heights[i])*(abs(j-i))));
            }
        }
        return maxx;
    }
};
//[1,7,2,5,4,7,3,6]
//[1,7,7,7,7,7,7,7]
//[7,7,7,7,7,7,6,6]