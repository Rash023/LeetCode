//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    int count=0;
    int index=-1;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            index=i;
            count++;
        }
        if (count==1){
            ans.push_back(index);
        }
        
        
    }
    if(count==0){
        ans.push_back(index);
    }
    ans.push_back(index);
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends