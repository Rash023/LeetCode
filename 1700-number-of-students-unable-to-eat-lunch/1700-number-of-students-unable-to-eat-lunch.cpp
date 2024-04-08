class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> st;
        queue<int> q;
        int OnesCount=0;
        int ZeroCount=0;
        
        for(int i=sandwiches.size()-1;i>=0;i--){
            st.push(sandwiches[i]);
            
        }
        
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
            if(students[i]==0) ZeroCount++;
            else OnesCount++;
            
            
        }
        
        int lastServed=0;
        while(!st.empty() && lastServed<st.size()){
            int frontEle=q.front();
            q.pop();
            
            if(frontEle==st.top()){
                if(frontEle==0) ZeroCount--;
                else OnesCount--;
                lastServed=0;
                st.pop();
            }
            else{
                lastServed++;
                q.push(frontEle);
                
            }
            
            
        }
        
        return q.size();
        
        
    }
};