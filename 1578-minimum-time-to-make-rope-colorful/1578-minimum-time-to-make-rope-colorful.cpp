class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int left=0;
        int right=1;
        int cost=0;
        
        while(right<colors.size()){
            if(colors[left]==colors[right]){
                if(neededTime[left]>neededTime[right]){
                 
                    cost+=neededTime[right++];
                }
                else{
                    cost+=neededTime[left];
                    left=right++;
                 
                    
                    
                }
            }
            else{
                left=right++;
                
                
            }
        }
        
        return cost;
    }
};