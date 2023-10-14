class Solution {
private:
    static bool comp(vector<int>&a,vector<int> &b){
        return a[1]<b[1];
    }
public:
    
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        
        
        int end=intervals[0][1];
        int cnt=0;
        for(int i=1;i<intervals.size();i++){
            if(end<=intervals[i][0] ){
                end=intervals[i][1];
            }
            else{
                    
                cnt++;
            }
        }
        
        return cnt;
    }
};