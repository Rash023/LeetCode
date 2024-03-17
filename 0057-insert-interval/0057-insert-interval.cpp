class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if(intervals.size()==0){
            return {newInterval};
            
        }
        int i=0;
        vector<vector<int>> ans;
        while(i<intervals.size()){
            int start=intervals[i][0];
            int end=intervals[i][1];
            
            if(end<newInterval[0]){
                ans.push_back({intervals[i][0],intervals[i][1]});
                
        
            }
            else if(start>newInterval[1]){
                break;
                
            }
            else{
                //merging the intervals
                newInterval[0]=min(newInterval[0],intervals[i][0]);
                newInterval[1]=max(newInterval[1],intervals[i][1]);
            
                
                
                
                
            }
            i++;
            
        }
        
        
        ans.push_back(newInterval);
        
        while(i<intervals.size()){
            ans.push_back({intervals[i][0],intervals[i][1]});
            i++;
            
        }
        
        return ans;
        
        
    }
};