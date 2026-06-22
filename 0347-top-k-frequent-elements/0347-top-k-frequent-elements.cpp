class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
        unordered_map<int,int> mpp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++) mpp[nums[i]]++;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            minh.push({it->second,it->first});
            if(minh.size()>k) minh.pop();
        }
        while(!minh.empty()){
            ans.push_back(minh.top().second);
            minh.pop();
        }
        return ans;
    }
};