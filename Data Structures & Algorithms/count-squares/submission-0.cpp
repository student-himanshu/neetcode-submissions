class CountSquares {
public:
    map<pair<int,int>,int>mp;  
    CountSquares() {
        
    }
    
    void add(vector<int> point) {
        mp[{point[0],point[1]}]++;
    }
    
    int count(vector<int> point) {
        int res=0;
        int x=point[0],y=point[1];
        for(auto p:mp){
            auto pos=p.first;
            if(abs(pos.first-x)!=abs(pos.second-y)|| pos.first==x||pos.second==y){
                continue;
            }
            res+=(mp[{x,pos.second}]*mp[{pos.first,y}]*mp[{pos.first,pos.second}]);
        }
        return res;

    }
    

};
