class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        vector<int> indegree(V, 0);

        for (auto &e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            indegree[v]++;
        }
        
        queue<int> q;
        for(int i=0; i<V; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        
        vector<int> result;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            result.push_back(curr);
            for(int &v : adj[curr]){
                indegree[v]--;
                
                if(indegree[v] == 0){
                    q.push(v);
                }
            }
        }
        
        return result;

    }
};
