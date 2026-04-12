class Solution {
public:
    void dfs(int v,vector<vector<int>>& isConnected,vector<int>& visited, vector<int>& result)
    {
        int n = isConnected.size();
        visited[v]=1;
        result.push_back(v);

        for(int i=0;i<n;i++)
        {
            if(isConnected[v][i]==1 && !visited[i])
            {
                dfs(i,isConnected,visited,result);
            }
        }
    }


    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int province=0;
        vector<int> visited(n,false);
        vector<int> result;

        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                dfs(i,isConnected,visited,result);
                province++;
            }
            
        }
        return province;
    }
};