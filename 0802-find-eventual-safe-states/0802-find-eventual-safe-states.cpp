class Solution {

private:
    bool dfscheck(int node, vector<int>&vis, vector<int>&path_vis, vector<int>&check, vector<vector<int>>&graph){
        path_vis[node]=1;
        vis[node]=1;
        check[node]=0;
        for(auto it: graph[node]){
            if(!vis[it]){
                if(dfscheck(it,vis,path_vis,check,graph)==true) return true;
            }
            else if(path_vis[it]){
                return true;
            }
        }
        check[node]=1;
        path_vis[node]=0;
        return false;
    }

public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> vis(n,0);
        vector<int> path_vis(n,0);
        vector<int> check(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfscheck(i,vis,path_vis,check,graph);
            }
        }
        vector<int> safenodes;
        for(int i=0;i<n;i++){
            if(check[i]==1) safenodes.push_back(i);
        }
        return safenodes;
    }
};