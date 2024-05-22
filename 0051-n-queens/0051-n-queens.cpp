class Solution {
public:
    vector<vector<string>> ans;
    
    bool isValid(int row,int col,vector<string> &board){
        
        for(int i=row-1;i>=0;i--){
            if(board[i][col]=='Q') return false;
            
        }
        
        //checking left diagonals
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(board[i][j]=='Q') return false;
            
        }
        
        //checking right diagonals
        for(int i=row-1,j=col+1;i>=0 && j<board.size();i--,j++){
            if(board[i][j]=='Q') return false;
            
        }
        
        
        return true;
        
    }
    
    void solve(int row,vector<string> &board){
        if(row>=board.size()){
            ans.push_back(board);
            return;
            
        }
        
        for(int col=0;col<board.size();col++){
            if(isValid(row,col,board)){
                board[row][col]='Q';
                solve(row+1,board);
                board[row][col]='.';
                
            }
            
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        solve(0,board);
        
        return ans;
        
    }
};