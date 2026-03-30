class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        stack<int> st;
        vector<int> ans;
        k = k%nums.size();
        while(k--){
            int xx = nums[nums.size()-1];
            st.push(xx);    
            nums.pop_back();
        }
        // while(st.size()){
        //     cout<<st.top()<<" "; 5 6 7 8 
        //     st.pop();
        // }
        while(st.size()){
            int temp;
            temp = st.top();
            ans.push_back(temp);
            st.pop();
        }
        for(int i=0 ;i<nums.size()-k-1 ; i++){
            ans.push_back(nums[i]);
        }
        nums.assign(ans.begin() , ans.end());
    }
};