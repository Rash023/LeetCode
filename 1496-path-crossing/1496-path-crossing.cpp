class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int,int>,bool> visited;
        
        int x=0;
        int y=0;
        
        visited[{x,y}]=true;
        
        for(int i=0;i<path.size();i++){
            if(path[i]=='N'){
                y++;
                if(visited[{x,y}]==true){
                    return true;
                }
                else{
                    visited[{x,y}]=true;
                }
                
            }
            else if(path[i]=='S'){
                y--;
                
                if(visited[{x,y}]==true){
                    return true;
                }
                else{
                    visited[{x,y}]=true;
                }
            }
            else if(path[i]=='E'){
                x++;
                if(visited[{x,y}]==true){
                    return true;
                }
                else{
                    visited[{x,y}]=true;
                }
            }
            else if(path[i]=='W'){
                x--;
                if(visited[{x,y}]==true){
                    return true;
                }
                else{
                    visited[{x,y}]=true;
                }
            }
        }
        return false;
    }
};