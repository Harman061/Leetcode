class Solution {
public:
    void dfs(int key,vector<vector<int>> & edges,vector<int> & vis)
{
    vis[key]=1;
    
    for(auto neigh:edges[key])
    {
        if(!vis[neigh])
        {
            dfs(neigh,edges,vis);
        }
    }
}



public:

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u); // undirected graph
        }

        vector<int> vis(n, 0); // mark visited nodes
        dfs(source, adj, vis);

        return vis[destination] == 1;
    }
};