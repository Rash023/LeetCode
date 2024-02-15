class Solution {
public:
    void computeLPS(string &word,vector<int> &lps){
        int m=word.size();
        
        int len=0;
        lps[0]=0;
        int i=1;
        
        while(i<m){
            if(word[i]==word[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len!=0){
                    len=lps[len-1];
               
                }
                else{
                    lps[i]=0;
                    i++;
                    
                }
            }
        }
    }
    int minimumTimeToInitialState(string word, int k) {
        int n=word.size();
        
        vector<int> lps(n);
        
        computeLPS(word,lps);
        
        int suffix_length=lps[n-1];
        
        while( suffix_length>0 && (n-suffix_length)%k!=0){
            suffix_length=lps[suffix_length-1];
            
        }
        
        
        if((n-suffix_length)%k==0){
            return (n-suffix_length)/k;
            
        }
        else{
            return ceil(n/(double)k);
            
        }
        
        
    }
};