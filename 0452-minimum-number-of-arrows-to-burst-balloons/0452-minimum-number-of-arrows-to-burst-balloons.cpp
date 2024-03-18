class Solution {
public:
  
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(begin(points),end(points));
        int ans=1;
        
        
        int start=points[0][0];
        
        int end=points[0][1];
        
        for(int i=1;i<points.size();i++){
            int newStart=points[i][0];
            int newEnd=points[i][1];
            
            if(newStart>end){
                ans++;
                start=newStart;
                end=newEnd;
                
            }
            else{
                start=max(start,newStart);
                end=min(end,newEnd);
                
            }
        }
        
        return ans;
        
    }
};