class Solution {
public:
    long long int bsearch(int x) {
        int s=0;
        int e=x;
        long long int mid= s + (e-s)/2;
        int ans=0;
        while(s<=e){
            long long int square=mid*mid;
            if(square==x){
                return mid;

            }
            else if(square>x){
                e=mid-1;
            }

            else if(square<x){
                ans=mid;
                s=mid+1;
            }
            mid= s + (e-s)/2;

        }

        return ans;

        
    }

    int mySqrt(int x){

        return bsearch(x);

    }



    
    
};