class Solution {
public:
     static int countSetBits(int a)
    {
          int count = 0;
        while(a){
            a = a&(a-1);
            count++;
        }
        return count;
            
           
            
       
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