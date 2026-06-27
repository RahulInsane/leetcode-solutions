class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>> minh;
        for(int i=0;i<nums.size();i++){
            minh.push(nums[i]);
        }
        int count=0;
        while(minh.size()>=2 &&minh.top()<k){
            long long x=minh.top();
            minh.pop();
            long long y=minh.top();
            minh.pop();
            long long el=(min(x,y)*2+max(x,y));
            minh.push(el);
            count++;
        }
        return count;
    }
};