//Code
  void dfs(int node, vector<int> adj[], vector<int> &visited, vector<int> &ans)
    {
        ans.push_back(node);
        visited[node] = 1;
        for(auto i:adj[node])
        {
            if(visited[i] == 0)
            {
                dfs(i, adj, visited, ans);
            }
        }
    }
    vector<int> dfsOfGraph(int n, vector<int> adj[]) {
        vector<int> ans;
        vector<int> visited(n,0);
        for(int i = 0; i < n; i++)
        {
            if(visited[i] == 0)
            {
                dfs(i, adj, visited, ans);       
            }
        }
        return ans;
    }
