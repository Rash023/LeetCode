class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v=heights;
        int res=0;
        sort(begin(heights),end(heights));
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=v[i]) res++;
        }
        return res;
    }
};