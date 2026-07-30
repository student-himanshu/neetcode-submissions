class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0,curr=0,total=0;
        for(int i=0;i<gas.size();i++){
            int bal=gas[i]-cost[i];
            total+=bal;
            curr+=bal;
            if(curr<0){
                start=i+1;
                curr=0;
            }

        }
        return total<0?-1:start;
    }
};
