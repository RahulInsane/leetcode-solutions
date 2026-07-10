class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mpp;
        int n=s.size();
        int last=n-1;
        for(int i=last;i>=0;i--){
            if(!mpp[s[i]]){
                mpp[s[i]]=i;
            }
        }
        int start=0;
        int end=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            end=max(mpp[s[i]],end);
            if(i==end){
                int partition=end-start+1;
                ans.push_back(partition);
                start=i+1;
            }
        }
        return ans;
    }
};