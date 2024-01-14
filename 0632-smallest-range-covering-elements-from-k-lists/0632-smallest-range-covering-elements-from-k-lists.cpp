class Info{
    public:
    int data;
    int rowIndex;
    int colIndex;
    
    Info(int data,int rowIndex,int colIndex){
        this->data=data;
        this->rowIndex=rowIndex;
        this->colIndex=colIndex;
        
    }
};


class compare{
    public:
    bool operator()(Info *a,Info *b){
        return a->data>b->data;
        
    }
};



class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<Info*,vector<Info *>,compare> pq;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        
        for(int i=0;i<nums.size();i++){
            int element=nums[i][0];
            int rowIndex=i;
            int colIndex=0;
            Info *info=new Info(element,rowIndex,colIndex);
            pq.push(info);
            maxi=max(maxi,element);
            mini=min(mini,element);
            
        }
        
        int ansStart=mini;
        int ansEnd=maxi;
        
        while(!pq.empty()){
            Info *topNode=pq.top();
            pq.pop();
            int topElement=topNode->data;
            int topRow=topNode->rowIndex;
            int topCol=topNode->colIndex;
            
            int mini=topNode->data;
            
            
            if((maxi-mini)<(ansEnd-ansStart)){
                ansEnd=maxi;
                ansStart=mini;
            }
            
            if(topCol+1<nums[topRow].size()){
                int element=nums[topRow][topCol+1];
                maxi=max(maxi,element);
                Info *newInfo=new Info(element,topRow,topCol+1);
                pq.push(newInfo);
            }
            else{
                break;

            }
        }
        
        return{ansStart,ansEnd};
        
    }
};