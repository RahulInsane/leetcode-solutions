class Solution {
private:
bool dfscheck(vector<int>&vis, vector<int>&path_vis, int node, vector<vector<int>>&adj){
    vis[node]=1;
    path_vis[node]=1;
    for( auto it: adj[node]){
        if(!vis[it]){
            if(dfscheck(vis,path_vis,it,adj)==true) return true;
        }
            
        else if(path_vis[it]){
            return true;
        }
    }
    path_vis[node]=0;
    return false;
}

public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
      for (int i = 0; i < prerequisites.size(); i++) {
    int u = prerequisites[i][1];
    int v = prerequisites[i][0];
    adj[u].push_back(v);
}
        vector<int> vis(numCourses,0);
        vector<int> path_vis(numCourses,0);
        for(int i=0;i<numCourses; i++){
            if(!vis[i]){
                if(dfscheck(vis,path_vis,i,adj)==true) return false;
            }
        }
        return true;
    }
};