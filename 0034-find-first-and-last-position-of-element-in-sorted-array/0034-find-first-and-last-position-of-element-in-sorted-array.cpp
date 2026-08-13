class Solution {
public:

    int firstoccurence(vector<int>&nums,int target,int n){
        int low=0;
        int high=n-1;
        int first=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return first;
    }

    int lastoccurence(vector<int>&nums,int target,int n){
        int last=-1;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                low=mid+1;
                last=mid;
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first= firstoccurence(nums,target,n);
        if(first==-1) return {-1,-1};
        int last=lastoccurence(nums,target,n);
        return {first,last};
    }
};