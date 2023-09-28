//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    if(s.size()&1){
        return -1;
    }
    stack<char> st;
    int count =0;
    for(auto ch:s){
        if(ch=='{'){
            st.push(ch);
        }
        else{
            if(st.empty()){
                st.push(ch);
                
            }
            else if(st.top()=='{'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
    }
    
  
        while(!st.empty()){
            char ele1=st.top();
            st.pop();
            char ele2=st.top();
            st.pop();
            if(ele1==ele2){
                count++;
            }
            else{
                count+=2;
            }
        }
    
    
    return count;
}