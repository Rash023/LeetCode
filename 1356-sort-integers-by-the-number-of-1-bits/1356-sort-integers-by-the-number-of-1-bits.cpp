class Solution {
public:
     static int countSetBits(int n)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        int cnt=0;
        while(n>0){
            if(n%2){
               cnt++;
            }
            
            n/=2;
            
           
            
        }
        
        return cnt;
    }
    
     static bool cmp(int a,
         int b)
{
    int p=countSetBits(a);
         int q=countSetBits(b);
         if(p==q){
             return a<=b;
         }
         else{
             return p<=q;
         }
}
   
    vector<int> sortByBits(vector<int>& arr) {
        sort(begin(arr),end(arr),cmp);
        
        return arr;
    }
};