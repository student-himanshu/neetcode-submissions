class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int a=0,b=0,c=0;
            for(auto& triplet:triplets){
               if(triplet[0]<=target[0]&& triplet[1]<=target[1]&& triplet[2]<=target[2]){    
                    a=max(a,triplet[0]);
                    b=max(b,triplet[1]);
                    c=max(c,triplet[2]);
                    // cout<<a<<b<<c<<endl;
                }
            }
        return a==target[0] && b==target[1] && c==target[2];
    }
};
