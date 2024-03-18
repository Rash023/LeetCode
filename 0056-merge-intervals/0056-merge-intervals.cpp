class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(begin(intervals),end(intervals));
        
        int start=intervals[0][0];
        int end=intervals[0][1];
        
        for(int i=1;i<intervals.size();i++){
            int newStart=intervals[i][0];
            int newEnd=intervals[i][1];
            
            if(newStart<=end){
                start=min(start,newStart);
                end=max(end,newEnd);
                
            }
            else{
                ans.push_back({start,end});
                start=newStart;
                end=newEnd;
                
            }
        }
        
        ans.push_back({start,end});
        
        return ans;
        
    }
};