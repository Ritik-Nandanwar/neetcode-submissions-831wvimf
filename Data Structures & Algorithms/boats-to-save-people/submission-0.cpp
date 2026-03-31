class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        //1 2 2 3 3 => 
        sort(people.begin() , people.end());
        int l=0,r=people.size()-1;
        int ans=0;
        while(l <= r){
            if((people[l] + people[r]) <= limit){
                ans++;
                l++;
                r--;
            }
            else if(people[l] >= people[r]){
                l++;
                ans++;
            }
            else if(people[l] <= people[r]){
                r--;
                ans++;
            }
        }
        return ans;
    }
};