class Trie {
public:
    struct TrieNode{
        bool end;
        TrieNode * children[26];
        
    };
    
    TrieNode *getNode(){
        TrieNode *newNode=new TrieNode;
        newNode->end=false;
        for(int i=0;i<26;i++){
            newNode->children[i]=NULL;
            
        }
        
        return newNode;
        
    }
    
    TrieNode *root;
    
    Trie() {
        root=getNode();
        
    }
    
    void insert(string word) {
        TrieNode *crawl=root;
        
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            int idx=ch-'a';
            
            if(crawl->children[idx]==NULL){
                crawl->children[idx]=getNode();
                
            }
            crawl=crawl->children[idx];
            
        }
        
        crawl->end=true;
        
    }
    
    bool search(string word) {
         TrieNode *crawl=root;
        
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            int idx=ch-'a';
            
            if(crawl->children[idx]==NULL){
                return false;
                
                
            }
            crawl=crawl->children[idx];
            
        }
        
        if(crawl->end==true && crawl!=NULL) return true;
        return false;
        
    }
    
    bool startsWith(string prefix) {
        TrieNode *crawl=root;
        
        for(int i=0;i<prefix.size();i++){
            char ch=prefix[i];
            int idx=ch-'a';
            
            if(crawl->children[idx]==NULL){
                return false;
                
                
            }
            crawl=crawl->children[idx];
            
        }
        
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */