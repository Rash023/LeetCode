class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int> q;
        
        for(int i=1;i<9;i++){
            q.push(i);
            
            
        }
        
        vector<int> result;
        while(!q.empty()){
            int digit=q.front();
            q.pop();
            
            if(digit>=low  && digit<=high){
                result.push_back(digit);
            }
            
            int nextDigit=digit%10;
             if(nextDigit + 1 <= 9) {
                q.push(digit * 10 +(nextDigit + 1));
            }
           
        }
        
        return result;
    }
};