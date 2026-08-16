class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq(stones.begin(),stones.end());
        if(pq.size()<2)return pq.top();
        while(pq.size()>1){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            if(a==b)continue;
            else if(a>=b)pq.push(a-b);
        }
        return pq.top();
    }
};
