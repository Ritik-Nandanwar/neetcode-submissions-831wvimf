// class Solution {
// public:
//     int maxArea(vector<int>& heights) {
//         int maxx = INT_MIN;
//         int sizz = heights.size();
//         for(int i=0 ; i<sizz ; i++){
//             for(int j=0 ; j<sizz ; j++){
//                 // cout<<"i = "<<i<<", j = "<<j<<" -> "<<min(heights[j],heights[i])<<" "<<abs(j-i)<<endl;
//                 maxx = max(maxx , (min(heights[j],heights[i])*(abs(j-i))));
//             }
//         }
//         return maxx;
//     }
// };

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=INT_MIN,lh=0, rh=heights.size()-1, siz = heights.size();
        while(lh<=rh){
            ans = max(ans , min(heights[lh] , heights[rh]) * (rh-lh));
            if(heights[lh] < heights[rh]){
                lh++;
            }
            else{
                rh--;
            }
        }
        return ans;
    }
};


















