class Solution {
public:
    void dfs(int key , vector<vector<int>>& rooms,vector<int>& vis)
    {
        vis[key]=1;
        for(auto neigh:rooms[key])
        {
            if(!vis[neigh])
            {
                dfs(neigh,rooms,vis);
            }
        }
    }


public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> vis(rooms.size(),0);

        dfs(0,rooms,vis);
        for(auto it: vis){
        if(it==0){return false;}}
        return true;
    }
};