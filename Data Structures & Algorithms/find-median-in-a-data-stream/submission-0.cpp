class MedianFinder {
public:
    vector<int>pq;

    MedianFinder() {
        
    }
    
    void addNum(int num) {
        pq.push_back(num);
        sort(pq.begin(),pq.end());
    }
    
    double findMedian() {
       int n=pq.size();
       if(n%2==0){
            return ((double)(pq[n/2-1]+pq[n/2])/2);
       }
          return pq[n/2];

    }
};
