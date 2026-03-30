class Solution {
public:
    int mySqrt(int x) {
        long long lo=1,hi=x;
        long long ans=0;
        if(x == 0) return 0;
        while(lo <= hi){
            long long mid =lo + (hi-lo)/2;
            if((long long)mid*mid == x){
                return mid;
            }
            else if((long long)mid*mid > x){
                hi=mid-1;
            }
            else if((long long)mid*mid < x){
                lo=mid+1;
                ans = mid;
            }
        }
        return ans;
    }
};