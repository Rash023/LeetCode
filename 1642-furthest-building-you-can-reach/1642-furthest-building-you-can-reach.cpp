class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        
        int i=0;
        
        
        while(i<heights.size()-1){
            if(i==heights.size()-1){
                return i;
            }
            if(heights[i]<heights[i+1]){
                int diff=heights[i+1]-heights[i];
                
                if(bricks>=diff){
                    bricks-=diff;
                  
                    pq.push(diff);
                }
                else if(ladders>0){
                    if(!pq.empty()){
                        int max_past_brick=pq.top();
                        
                        if(diff<max_past_brick){
                            bricks+=max_past_brick;
                            bricks-=diff;
                            
                            pq.pop();
                            pq.push(diff);
                            
                        }
                           
                    }
                    ladders--;
                    
                   
                   
                }
                else{
                    break;
                }
            }

            
            i++;
            
            
        }
        
        return i;
    }
};