class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int speed=1;
        while(true){
            int totalt=0;
            for(int pile:piles ){
                totalt+=(pile+speed-1)/speed;
            }
            if(totalt<=h){
                return speed;
            }
            speed++;
        }
    }
};
