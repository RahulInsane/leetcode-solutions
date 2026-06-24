class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n=tasks.size();
        vector<array<int,3>> sortedtasks;
        for(int i=0;i<n;i++){
            int start_time=tasks[i][0];
            int process_time=tasks[i][1];
            sortedtasks.push_back({start_time,process_time,i});
        }
        sort(begin(sortedtasks),end(sortedtasks));
        vector<int> result;
        int idx=0;
        long long curr_time=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> minh;
        while(idx<n || !minh.empty()){
            if(minh.empty()&& curr_time<sortedtasks[idx][0]) curr_time= sortedtasks[idx][0];
            while(idx<n && sortedtasks[idx][0]<=curr_time){
                minh.push({sortedtasks[idx][1],sortedtasks[idx][2]});
                idx++;
            }
            pair<int,int> curr_task=minh.top();
            minh.pop();
            curr_time+=curr_task.first;
            result.push_back(curr_task.second);
        }
        return result;
    }
};