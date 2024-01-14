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
    bool operator()(Info  *a,Info * b){
        return a->data>b->data;
    }
};


class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<Info *,vector<Info*>,compare> pq;
        
        int maxi=INT_MIN;
        int mini=INT_MAX;
        
        //proces first k elements 
        
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
            Info *newInfo=pq.top();
            pq.pop();
            int element=newInfo->data;
            int rowIndex=newInfo->rowIndex;
            int colIndex=newInfo->colIndex;
            
            int mini=newInfo->data;
            
            if((maxi-mini)<(ansEnd-ansStart)){
                ansStart=mini;
                ansEnd=maxi;
                
                
            }
            
            if(colIndex+1<nums[rowIndex].size()){
                int newElement=nums[rowIndex][colIndex+1];
                
                maxi=max(maxi,newElement);
                
                Info *topNode=new Info(newElement,rowIndex,colIndex+1);
                pq.push(topNode);
                
            }
            
            else{
                break;
                
            }
            
            
        }
        
        return {ansStart,ansEnd};
        
        
    }
};