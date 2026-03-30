class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans;
        int i=0;
        while(i<temperatures.size()){
            int tempToCompare = temperatures[i];
            vector<int> temps = temperatures;
            int j=i;
            while(j<temperatures.size() && temperatures[j]<=tempToCompare){
                j++;
            }
            cout<<"for i ="<<i<<", j is "<<j<<endl;
            if(j>=temperatures.size()){
                ans.push_back(0);
            }
            else{
                ans.push_back(j-i);
            }
            i++;
        }
        return ans;
    }
};
