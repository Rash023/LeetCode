//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        
      int sum = 0;
      for(int i =0;i<N;i++)sum+=arr[i];
      if(sum&1)return 0;
      sum/=2;
      vector <bool> dp(sum+1);
      dp[0] = true;
      for(int i =0;i<N;i++){
         int x = arr[i];
         for(int j =sum;j-x>=0;j--){
            dp[j]=dp[j] || dp[j-x];
         }
      }
      return dp[sum];
   }
    
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends