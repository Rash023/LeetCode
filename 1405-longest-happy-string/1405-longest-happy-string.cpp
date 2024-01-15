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
    string longestDiverseString(int a, int b, int c) {
        
        priority_queue<Info *,vector<Info*>,compare> pq;
        
        if(a>0){
            Info *temp=new Info('a',a);
            pq.push(temp);
            
        }
        
        if(b>0){
            Info *temp=new Info('b',b);
            pq.push(temp);
        }
        
        if(c>0){
            Info *temp=new Info('c',c);
            pq.push(temp);
            
        }
        
        string ans="";
        
        
        while(pq.size()>1){
            Info *first=pq.top();
            pq.pop();
            Info *second=pq.top();
            pq.pop();
            
            if(first->count>=2){
                ans.push_back(first->data);
                ans.push_back(first->data);
                first->count-=2;
            }
            else{
                ans.push_back(first->data);
                first->count--;
            }
            
            if(second->count>=2 && second->count>=first->count){
                ans.push_back(second->data);
                ans.push_back(second->data);
                
                second->count-=2;
                
            }
            else{
                ans.push_back(second->data);
                second->count--;
                
            }
            
            
            if(first->count>0){
                pq.push(first);
                
            }
            
            if(second->count>0){
                pq.push(second);
            }
        }
        
        //handling the last element
        
        if(pq.size()==1){
            Info *temp=pq.top();
            pq.pop();
            
            if(temp->count>=2){
                ans.push_back(temp->data);
                ans.push_back(temp->data);
                
                temp->count-=2;
                
                
            }
            else{
                ans.push_back(temp->data);
                temp->count--;
            }
        }
        
        return ans;
    }
};