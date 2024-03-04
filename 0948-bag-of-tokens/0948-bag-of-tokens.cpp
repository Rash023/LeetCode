class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(begin(tokens),end(tokens));
        
        int score=0;
        int max_score=0;
        
       
        
        int i=0;
        int j=tokens.size()-1;
        
        while(i<=j){
            if(tokens[i]<=power){
                power-=tokens[i++];
                score++;
                max_score=max(score,max_score);
                
            }
            else if(score>=1){
                power+=tokens[j--];
                score--;
                
            }
            else{
                break;
                
                
            }
        }
        return max_score;
        
        
    }
};