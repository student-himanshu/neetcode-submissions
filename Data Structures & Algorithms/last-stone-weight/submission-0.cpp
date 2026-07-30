class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int i:stones){
            pq.push(i);
        }
        while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(y<x){
                pq.push(abs(y-x));
            }
        }
        if(pq.empty()){
            return 0;
        }
        else{
            return pq.top();
        }
    }
};
