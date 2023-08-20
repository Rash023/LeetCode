//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	   int count=0;
	   for(int i=0;i<n;i++){
	       if(arr[i]==x){
	           count++;
	           for(int j=i+1;j<n;j++){
	               if(arr[i]!=arr[j]){
	                   break;
	               }
	               else{
	                   count++;
	               }
	           }
	       }
	       if(count>=1){
	           break;
	       }
	       
	   }
	   return count;
	   
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends