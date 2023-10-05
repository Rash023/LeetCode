//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
    bool possiblesol(int a[],int n,int k,long long sol){
        long long timeSum=0;
        int c=1;
        for(int i=0;i<n;i++){
            if(a[i]>sol){
                return false;
            }
            else if(timeSum+a[i]>sol){
                c++;
                timeSum=a[i];
                if(c>k){
                    return false;
                }
            }
            else{
                timeSum+=a[i];
            }
        }
        return true;
        
    }
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long start=0;
        long long end=0;
        long long ans=-1;
        for(long long i=0;i<n;i++){
            end+=arr[i];
        }
        
        while(start<=end){
            long long mid=start+(end-start)/2;
            
            if(possiblesol(arr,n,k,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends