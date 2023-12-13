class Solution {
    public int numSpecial(int[][] mat) {
        int rows[]=new int[mat.length];
        int cols[]=new int[mat[0].length];
        
        for(int i=0;i<mat.length;i++){
            for(int j=0;j<mat[0].length;j++){
                if(mat[i][j]==1){
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        
        int cnt=0;
        for(int i=0;i<mat.length;i++){
            for(int j=0;j<mat[0].length;j++){
                if(mat[i][j]==1 && rows[i]==1 && cols[j]==1){
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
}