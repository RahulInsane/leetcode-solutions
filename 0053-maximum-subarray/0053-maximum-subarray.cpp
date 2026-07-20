class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int start=0;
        int ans_start=0;
        int ans_end=0;
        int maxsum=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
            
            if(sum==0) start=i;
            sum+=nums[i];
          
            if(sum>maxsum){
                maxsum=sum;
                ans_start=start;
                ans_end=i;
            }  
              if(sum<0){
                sum=0;
            }  
        }
        return maxsum;
    }
};