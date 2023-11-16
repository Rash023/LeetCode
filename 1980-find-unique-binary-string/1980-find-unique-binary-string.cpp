class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums[0].size();
        
        int index=0;
        
        string ans="";
        
        for(int i=0;i<nums.size();i++){
            string temp=nums[i];
            
            if(temp[index]=='0'){
                ans+='1';
            }
            else{
                ans+='0';
            }
            index++;
            
        }
        
        return ans;
        
        
    }
};