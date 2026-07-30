class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>count(26,0);
        for(char c:tasks){
            count[c-'A']++;
        }
        sort(count.begin(),count.end());
        int maxf=count[25];
        int id=(maxf-1)*n;
        for(int i=24;i>=0;i--){
            id-=min(maxf-1,count[i]);
        }
        return max(0,id)+tasks.size();
    }
};
