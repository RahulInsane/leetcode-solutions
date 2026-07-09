class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int low=0;
        int high=n-1;
        int idx=n-1;
        while(low<=high){
            if(abs(nums[low])>abs(nums[high])){
                ans[idx]=nums[low]*nums[low];
                low++;
                idx--;
            }
            else{
               ans[idx]=nums[high]*nums[high];
               idx--;
               high--;
            } 
        }
        return ans;
    }
};