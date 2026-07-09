class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       int diff=INT_MAX;
       int sum=0;
       sort(nums.begin(),nums.end());
       int n=nums.size();
       for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int temp_sum=nums[i]+nums[j]+nums[k];
                int temp_diff=abs(target-temp_sum);
                if(temp_diff<diff){
                    diff=temp_diff;
                    sum=temp_sum;
                    
                }
                if(temp_sum<target) j++;
                else if(temp_sum>target) k--;
                else return target;
            }
       } 
       return sum;
    }
};