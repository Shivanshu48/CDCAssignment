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
