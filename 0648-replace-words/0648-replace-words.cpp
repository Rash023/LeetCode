class Solution {
public:
    
    struct trieNode{
        trieNode *children[26];
        bool isEnd=false;
    };
    
    trieNode *getNode(){
        trieNode *newNode=new trieNode();
        newNode->isEnd=false;
        for(int i=0;i<26;i++){
            newNode->children[i]=NULL;
        }
        return newNode;
        
    }
    void insert(string word,trieNode *root){
        trieNode *crawler=root;
        for(int i=0;i<word.size();i++){
            int idx=word[i]-'a';
            if(!crawler->children[idx])
                crawler->children[idx]=getNode();
            crawler=crawler->children[idx];   
        }
        crawler->isEnd=true;
    }
    
    string search(string word,trieNode *root){
        trieNode *crawler=root;
        for(int i=0;i<word.size();i++){
            int idx=word[i]-'a';
            if(!crawler->children[idx]) return word;
            crawler=crawler->children[idx];
            if(crawler->isEnd) return word.substr(0,i+1);
            
        }
        return word;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        trieNode *root=getNode();
        string result="";
        for(int i=0;i<dictionary.size();i++){
            insert(dictionary[i],root);
            
        }
        
        stringstream ss(sentence);
        string word;
        while(getline(ss,word,' ')){
            result+=search(word,root)+' ';
            
        }
        result.pop_back();  
        return result;
        
    }
    
    
};