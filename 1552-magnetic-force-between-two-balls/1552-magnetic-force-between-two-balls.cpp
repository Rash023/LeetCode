class Solution {
public:
    bool possible(int force,vector<int> &position,int m){
        int prev=position[0];
        int ballCount=1;
        for(int i=1;i<position.size();i++){
            int curr=position[i];
            if(curr-prev>=force){
                ballCount++;
                prev=curr;
            }
            if(ballCount==m) break;
        }
        return ballCount==m;
    }
    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(begin(position),end(position));
        int l=1;
        int r=position[n-1]-position[0];
        int res=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(possible(mid,position,m)){
                res=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return res;
    }
};