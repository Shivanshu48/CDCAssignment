class Solution {
  public:
    // Function to detect cycle using DSU in an undirected graph.
    vector<int> parent, rank;
    int find(int i, vector<int>& parent){
        if(i == parent[i]){
            return i;
        }
        return parent[i] = find(parent[i], parent);
    }
    
    void Union(int x, int y, vector<int>&parent, vector<int>& rank){
        int xparent = find(x, parent);
        int yparent = find(y, parent);
        if(xparent == yparent){
            return;
        }
        
        if(rank[xparent] > rank[yparent]){
            parent[yparent] = xparent;
        }
        else if(rank[xparent] < rank[yparent]){
            parent[yparent] = xparent;
        }
        else{
            parent[xparent] = yparent;
            rank[yparent]++;
        }
    }
    
    int detectCycle(int V, vector<int> adj[]) {
        // Code here
        parent.resize(V);
        rank.resize(V);
        
        for(int i=0; i<V; i++){
            parent[i] = i;
            rank[i] = 0;
        }
        for(int u=0; u<V; u++){
            for(int &v : adj[u]){
                if(u<v){
                    int parentu = find(u, parent);
                    int parentv = find(v, parent);
                    if(parentu == parentv) return true;
                    Union(u,v, parent, rank);
                }
            }
        }
        return false;
    }
};
