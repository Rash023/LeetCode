class Info{
    public:
    
    char data;
    int count;
    
    Info(char data,int count){
        this->data=data;
        this->count=count;
    }
};


class compare{
    public:
    bool operator()(Info *a,Info *b){
        return a->count<b->count;
        
    }
};



class Solution {
public:
    string reorganizeString(string s) {
        int freq[26]={0};
        
        
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            freq[ch-'a']++;
            
        }
        
        priority_queue<Info *,vector<Info*>,compare> pq;
        
        for(int i=0;i<26;i++){
            if(freq[i]>0){
               Info *temp=new Info(i+'a',freq[i]);
                pq.push(temp);
                
            }
        }
        
        
        string ans="";
        
        while(pq.size()>1){
            Info *first=pq.top();
            pq.pop();
            Info *second=pq.top();
            pq.pop();
            ans.push_back(first->data);
            ans.push_back(second->data);
            
            first->count--;
            
            second->count--;
            
            if(first->count>0){
                pq.push(first);
            }
            
            if(second->count>0){
                pq.push(second);
                
            }
        }
        //handling the last element of the queue
        if(pq.size()==1){
            Info *temp=pq.top();
            pq.pop();
            ans.push_back(temp->data);
            
            temp->count--;
            
            if(temp->count!=0){
                return "";
                
            }
        }
        
        
        return ans;
        
    }
};