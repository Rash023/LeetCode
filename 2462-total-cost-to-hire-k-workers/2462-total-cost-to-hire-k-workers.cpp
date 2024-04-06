class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long cost=0;
        
        priority_queue<int,vector<int>,greater<int>> pq1,pq2;
        
        int i=0;
        int j=costs.size()-1;
        int hired=0;
        
        
        while(hired<k){
            
            while(pq1.size()<candidates && i<=j){
                pq1.push(costs[i++]);
                
            }
            
            while(pq2.size()<candidates && j>=i){
                pq2.push(costs[j--]);
            }
            
            
            int ele1=pq1.size()>0? pq1.top():INT_MAX;
            int ele2=pq2.size()>0? pq2.top():INT_MAX;
            
            if(ele1<=ele2){
                cost+=ele1;
                pq1.pop();
                  
            }
            else{
                cost+=ele2;
                pq2.pop();
                
            }
             hired++;
        }
        
        
        return cost;
        
        
    }
};