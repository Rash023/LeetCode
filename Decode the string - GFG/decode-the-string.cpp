//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
         stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ']') {
                st.push(s[i]);
            }
            else{
                string curr_str = "";
                
                while(st.top() != '['){
                    curr_str = st.top() + curr_str ;
                    st.pop();
                }
                
                st.pop();   // for '['
                string number = "";
                
                // for calculating number
                
                while(!st.empty() && isdigit(st.top())){
                    number = st.top() + number;
                    st.pop();
                }
                int k_time = stoi(number);    // convert string to number
                
                while(k_time--){
                    for(int p = 0; p < curr_str.size() ; p++)
                        st.push(curr_str[p]);
                }
            }
        }
        
        s = "";
        while(!st.empty()){
            s = st.top() + s;
            st.pop();
        }
        return s;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends