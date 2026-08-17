class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        queue<int>pq;
        for(char c:tokens){
            pq.push_front(c);
        }
        while(pq.size()>1){
            int a=stoi(pq.top());
            pq.pop();
            int b=stoi(pq.top());
            pq.pop();
            char c=pq.top();
            pq.pop();
            if(c=="+"){
                pq.push_back(a+b);
            }
            if(c=="+"){
                pq.push_back(a+b);
            }
        }
    }
};
