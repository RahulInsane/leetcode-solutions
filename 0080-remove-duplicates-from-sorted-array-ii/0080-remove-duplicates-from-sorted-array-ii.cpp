class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int i=0;
        while(i<n){
            int el=nums[i];
            int count=0;
            while(i<n && nums[i]==el){
                if(count<2){
                    count++;
                    ans.push_back(nums[i]);
                }
               i++;
            }
            
        }
        for(int i=0;i<ans.size();i++) nums[i]=ans[i];
        return ans.size();

    }
};