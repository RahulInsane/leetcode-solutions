class Solution {
public:
    int maxi(vector<int>&nums,int n){
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>ans) ans=nums[i];
        }
        return ans;
    }

    int count(vector<int> &nums, int limit){
        int n=nums.size();
        int number=1;
        int subarrays=0;
        for(int i=0;i<n;i++){
            if(nums[i]+subarrays<=limit) subarrays+=nums[i];
            else{
                subarrays=nums[i];
                number++;
            }
        }
        return number;
    }

    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=maxi(nums,n);
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int count_subarrays=count(nums,mid);
            if(count_subarrays>k)low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};