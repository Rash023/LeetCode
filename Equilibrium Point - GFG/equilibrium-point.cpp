//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        if(n==1){
            return n;
        }
        if(n==2){
            return -1;
        }
        int rsum=0;
        int lsum=0;
        int s=0;
        int e=n-1;
        while(s<e){
            if(rsum==lsum){
                rsum+=a[s];
                lsum+=a[e];
                s++;
                e--;
            }
            else if(rsum>lsum){
                lsum+=a[e];
                e--;
            }
            else{
                rsum+=a[s];
                s++;
            }
        }
        
        if(lsum==rsum){
            return s+1;
        }
        else{
            return -1;
        }
        
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends