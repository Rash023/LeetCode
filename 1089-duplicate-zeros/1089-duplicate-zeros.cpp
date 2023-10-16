class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]==0){
                int temp=arr.size()-1;
                
                while(temp>i){
                    arr[temp]=arr[temp-1];
                    temp--;
                }
                
            }
            
        }
    }
};