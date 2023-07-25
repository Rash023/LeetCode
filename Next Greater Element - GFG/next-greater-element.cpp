//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> v(n, -1);
 
        // Initialize a variable to keep track of the
        // maximum element seen so far.
        long long mx = arr[n - 1];
 
        // Iterate over the array from right to left.
        for (int i = n - 2; i >= 0; i--) {
            // If the element to the right is greater than
            // the current element, then the next greater
            // element for the current element is the
            // element to the right.
            if (arr[i + 1] > arr[i]) {
                v[i] = arr[i + 1];
            }
            else {
                // If the next greater element for the
                // element to the right is greater than the
                // current element, then the next greater
                // element for the current element is the
                // next greater element for the element to
                // the right.
                if (v[i + 1] > arr[i]) {
                    v[i] = v[i + 1];
                }
                else if (mx > arr[i]) {
                    // If there is no next greater element
                    // to the right that is greater than the
                    // current element, then we need to find
                    // the next greater element that is
                    // greater than the current element and
                    // to its right. Initialize a variable
                    // to keep track of the index of the
                    // next greater element.
                    int k = i + 1;
                    // Iterate over the array from the
                    // current element to its right to find
                    // the next greater element.
                    while (arr[k] <= arr[i]) {
                        k++;
                    }
                    v[i] = arr[k];
                }
                else {
                    // If there is no next greater element
                    // to the right that is greater than the
                    // current element and there is no next
                    // greater element to the right that is
                    // greater than the next greater element
                    // for the current element, then there
                    // is no next greater element for the
                    // current element.
                    v[i] = -1;
                }
            }
            // Update the maximum element seen so far.
            mx = max(arr[i], mx);
        }
        // Return the vector containing the next greater
        // elements.
        return v;
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends