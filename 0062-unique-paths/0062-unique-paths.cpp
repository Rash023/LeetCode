class Solution {
public:
    int t[101][101];
   
    
    int solve(int x,int y,int m,int n){
        if(t[x][y]!=-1) return t[x][y];
        
        if(x>=m || y>=n) return 0;
        if(x==m-1 && y==n-1){
            return 1;
        }
        
        int rightAns=solve(x,y+1,m,n);
        int leftAns=solve(x+1,y,m,n);
        
        return t[x][y]=rightAns+leftAns;
        
        
    }
    int uniquePaths(int m, int n) {
        memset(t,-1,sizeof(t));
    
        return solve(0,0,m,n);
    

        
    }
};