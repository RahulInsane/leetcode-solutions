class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> maxh;
        vector<vector<int>> ans;
        for(int i=0;i<points.size();i++){
            maxh.push({points[i][0]*points[i][0]+points[i][1]*points[i][1],{points[i][0],points[i][1]}});
            if(maxh.size()>k)maxh.pop();
        }
        while(!maxh.empty()){
            int x=maxh.top().second.first;
            int y=maxh.top().second.second;
            ans.push_back({x,y});
            maxh.pop();
        }
        return ans;
    }
};