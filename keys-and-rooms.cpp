class Solution {
public:
    void dfs(int v, bool* visited,vector<vector<int>> rooms){
        visited[v]=true;
        for(int i:rooms[v]){
            if(!visited[i])
                dfs(i,visited,rooms);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int len=rooms.size();
        bool *visited=new bool[len];
        for(int i=0;i<len;i++)
            visited[i]=false;
        dfs(0,visited,rooms);
        for(int i=0;i<len;i++)
            if(visited[i]==false) return false;
        return true;
    }
};