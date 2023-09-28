//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        //first pushing all the elements of first row into the stack
        stack<int> st;
        
        for(int i=0;i<n;i++){
            st.push(i);
        }
        
        //checking which element is celebrity
        
        while(st.size()!=1){
            int a=st.top(); st.pop();
            int b=st.top(); st.pop();
            
            if(M[a][b]){
                st.push(b);
            }
            else{
                st.push(a);
            }
        }
        
        int mightBeCelebrity=st.top(); st.pop();
        
        //celebrity should not know anyone
        
        for(int i=0;i<n;i++){
            if(M[mightBeCelebrity][i]!=0){
                return -1;
            }
        }
        
        //everyone should know celebrity
        
        for(int i=0;i<n;i++){
            if(M[i][mightBeCelebrity]==0 && i!=mightBeCelebrity){
                return -1;
            }
        }
        
        //might be celebrity is celebrity
        
        return mightBeCelebrity;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends