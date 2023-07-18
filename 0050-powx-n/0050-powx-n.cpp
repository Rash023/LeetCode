class Solution {
public:
    double myPow(double x, int n) {
        if(n>=0){
            if(n==0){
            return 1;
            }
            else if(n==1){
                return x;
            }
            else{
                return x*pow(x,n-1);
            }

        }
        else{
            return 1/x*pow(x,n+1);
        }
        
    }
};