class Solution {
public:
    int largestInteger(int num) {
         string temp=to_string(num);
        
        priority_queue<int> even;
        priority_queue<int> odd;
        
        for(int i=0;i<temp.size();i++){
            int digit=temp[i]-'0';
            
            if(digit%2==0){
                even.push(digit);
            }
            else{
                odd.push(digit);
            }
        }
        
        int ans=0;
        
        
        for(int i=0;i<temp.size();i++){
            ans*=10;
            
            if((temp[i]-'0')%2==0){
                ans+=even.top();
                even.pop();
            }
            else{
                ans+=odd.top();
                odd.pop();
            }
        }
        
        return ans;
    
    }
};