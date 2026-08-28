class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int range=INT_MAX;
        int start=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                range=min(range,i-start+1);
                sum-=nums[start];
                start++;
                
            }
        }
        if(range!=INT_MAX) return range;
        return 0;
    }
};