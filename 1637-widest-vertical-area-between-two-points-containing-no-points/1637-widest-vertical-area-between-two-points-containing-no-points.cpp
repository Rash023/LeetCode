class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b){
        return a[0]<b[0];
    }
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(begin(points),end(points),comp);
        int mini=INT_MIN;
        for(int i=1;i<points.size();i++){
            mini=max(points[i][0]-points[i-1][0],mini);
        }
        
        return mini==INT_MIN? -1 :mini;
    }
};