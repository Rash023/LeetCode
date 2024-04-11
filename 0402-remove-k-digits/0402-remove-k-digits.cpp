class Solution {
public:
   string removeKdigits(string num, int k) {
    stack<char> st;

    for (char &c : num) {
        while (k > 0 && !st.empty() && st.top() > c) {
            k--;
            st.pop();
        }
        st.push(c);
    }

   
    while (k > 0 && !st.empty()) {
        k--;
        st.pop();
    }

   
    string ans = "";
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

   
    int i = 0;
    while (i < ans.size() && ans[i] == '0') {
        i++;
    }

    return (i == ans.size()) ? "0" : ans.substr(i);
        
    }
};