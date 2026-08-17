class Solution {
public:

    int maxi(vector<int> &nums){
        int n=nums.size();
        int  ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>ans) ans=nums[i];
        }
        return ans;
    }

    int calculate_days(vector<int>&nums,int capacity){
        int load=0;
        int days=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(load+nums[i]>capacity){
                days++;
                load=nums[i];
            }
            else load+=nums[i];
        }
        return days;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int low=maxi(nums);
        int n=nums.size();
        int high=accumulate(nums.begin(),nums.end(),0);
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            int number_of_days=calculate_days(nums,mid);
            if(number_of_days<=days){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};