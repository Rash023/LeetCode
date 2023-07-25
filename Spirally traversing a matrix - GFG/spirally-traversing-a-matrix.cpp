//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int total=row*col;
        vector<int> ans;
        //index
        int startrow=0;
        int startcol=0;
        int endrow=row-1;
        int endcol=col-1;

        while(count<total){
            //printing starting row
            for(int index=startcol;count<total && index<=endcol;index++){
                ans.push_back(matrix[startrow][index]);
                count++;
            }
            startrow++;

            //printing ending column
            for(int index=startrow;count<total && index<=endrow;index++){
                ans.push_back(matrix[index][endcol]);
                count++;
            }
            endcol--;

            //printing ending row
            for(int index=endcol;count<total && index>=startcol;index--){
                ans.push_back(matrix[endrow][index]);
                count++;
            }
            endrow--;

            //printing first column
            for(int index=endrow;count<total && index>=startrow;index--){
                ans.push_back(matrix[index][startcol]);
                count++;
            }
            startcol++;
        }
        return ans;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends