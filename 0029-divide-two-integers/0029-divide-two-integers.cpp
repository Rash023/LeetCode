class Solution {
public:
    int divide(int dividend, int divisor) {
    if(dividend==INT_MIN && divisor==-1){
        return INT_MAX;
        // break;
    }
    if(dividend==INT_MIN && divisor==1){
        return INT_MIN;
        // break;
    }
    if(dividend<0){
        // dividend = -dividend;
        int ans = dividend/divisor;
        return ans;
    }
    else if(divisor<0){
        // divisor = -divisor;
        int ans = dividend/divisor;
        return ans;
    }
    else{
        int ans = dividend/divisor;
        return ans;
    }
    }
};