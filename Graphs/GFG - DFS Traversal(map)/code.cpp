class Solution {
  public:
    void dfst(unordered_map<int, vector<int>>& adj, int u, vector<bool>& vis, vector<int>& res){
        if(vis[u] == true) return;
        vis[u] = true;
        res.push_back(u);
        for(int &v : adj[u]){
            if(!vis[v]){
                dfst(adj, v, vis, res);
            }
        }
    }
    
    vector<int> dfs(vector<vector<int>>& mp) {
        int v = mp.size();
        unordered_map<int, vector<int>> adj;
        for(int u = 0; u < v; u++){
            for(auto v = mp[u].begin(); v != mp[u].end(); v++){
                adj[u].push_back(*v);
            }
        }
        
        vector<int> res;
        vector<bool> vis(v,false);
        dfst(adj, 0, vis, res);
        return res;
    }
};
