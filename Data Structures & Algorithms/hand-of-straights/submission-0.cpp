class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        // sort(hand.begin(),hand.end());
        map<int,int>pq;
        for(int i:hand){
            pq[i]++;
        }
        for(auto [val,freq]:pq){
            if(freq>0){
                for(int i=0;i<groupSize;i++){
                    if(pq[val+i]<freq){
                        return false;
                    }
                    pq[val+i]-=freq;
                }
            }
        }
        return true;
    }
};
