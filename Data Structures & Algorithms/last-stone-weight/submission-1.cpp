class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto it:stones){
            pq.push(it);
        }
        while(pq.size() >= 2){
            int p1=pq.top();pq.pop();
            int p2=pq.top();pq.pop();
            if(p1 != p2){
                pq.push(abs(p2-p1));
            }
        }
        cout<<pq.size()<<endl;
        // if(pq.size() == 1){
        // }
            return pq.size() > 0 ? pq.top() : 0;
    }
};
