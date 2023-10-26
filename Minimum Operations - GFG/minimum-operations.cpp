//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        int cnt=0;
       
        
        if(n==0){
            return cnt;
        }
        
        while(n>1){
            if(n%2!=0){
                n--;
                cnt++;
            }
            else{
                n/=2;
                cnt++;
            }
            
        }
        
        return cnt+1;
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
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends