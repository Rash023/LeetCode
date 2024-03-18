class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        if(intervals.size()==0) return {newInterval};
        
        
        
        int i=0;
        
        while(i<intervals.size()){
            int start=intervals[i][0];
            int end=intervals[i][1];
            
            if(end<newInterval[0]){
                ans.push_back({start,end});
                
            }
            else if(start>newInterval[1]){
                break;
                
            }
            else{
                newInterval[0]=min(newInterval[0],start);
                newInterval[1]=max(newInterval[1],end);
                
            }
            i++;
            
        }
        
        ans.push_back(newInterval);
        
        //pushing the rest of the elements back into the arrya
        
        while(i<intervals.size()){
            ans.push_back({intervals[i][0],intervals[i][1]});
            i++;
            
        }
        
        return ans;
    }
};