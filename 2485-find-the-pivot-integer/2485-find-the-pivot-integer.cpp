class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        
        
        int totalSum=n*(n+1)/2;
        
        int sum=0;
        
        for(int i=1;i<n;i++){
            //sum from 1 to x
            sum+=i;
            
            //sum from x to n
            int tempSum=totalSum-sum+i;
            
            if(tempSum==sum) return i;
            
            
        }
        
        return -1;
        
    }
};