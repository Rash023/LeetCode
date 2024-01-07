class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int ans=0;
        double d=0;
        for(int i=0;i<dimensions.size();i++){
            double t=sqrt((dimensions[i][0]*dimensions[i][0]) +( dimensions[i][1]*dimensions[i][1] ));
            
            if(t>=d){
                if(t==d){
                    ans=max(ans,dimensions[i][0]*dimensions[i][1]);
                    
                }
                else{
                    ans=dimensions[i][0]*dimensions[i][1];
                }
                d=t;
                
                
            }
            
        }
        return ans;
    }
};