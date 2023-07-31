//Code

void bfs(int node, vector<int> adj[], unordered_map<int,bool>& vis, vector<int>& ans){
        queue<int> q;
        q.push(node);
        vis[node] = true;
        while(!q.empty()){
            int front = q.front();
            q.pop();
            ans.push_back(front);
            for(auto nbr : adj[front]){
                if(vis[nbr] == false){
                    vis[nbr] = true;
                    q.push(nbr);
                }
            }
        }
    }
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
       
        unordered_map<int,bool> vis;

        bfs(0,adj,vis,ans);
        
        return ans;
    }
