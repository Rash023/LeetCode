//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        vector<int> ans;
        int count=0;
        int index=0;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                count++;
                if(count==1){
                    ans.push_back(i);
                    index=i;
                    
                }
                else{
                    index=i;
                    
                }
            }
        }
        
        if(count==0){
            ans.push_back(-1);
        }
        else{
            ans.push_back(index);
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends