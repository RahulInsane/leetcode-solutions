class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            int start=0;
            int end=temp.size();
            while(start<end){
                int mid=start+ (end-start)/2;
                if(temp[mid]<nums[i]){
                    start=mid+1;
                }
                else end=mid;
            }
            if(start==temp.size()) temp.push_back(nums[i]);
            else temp[start]=nums[i];
        }
        return temp.size();
    }
};