class Solution {
public:
    vector<int> calculate_prefix(int n, vector<int>&nums){
        vector<int>res(n);
        int product=1;
        for(int i=0;i<n;i++){
            res[i]=product;
            product=product*nums[i];
            
        }
        return res;
    }
    vector<int>calculate_suffix(int n, vector<int>&nums){
        vector<int>res(n);
        int product=1;
        for(int i=n-1;i>=0;i--){
            res[i]=product;
            product*=nums[i];
        }
        return res;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix_product=calculate_prefix(n,nums);
        vector<int> suffix_product=calculate_suffix(n,nums);
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=prefix_product[i]*suffix_product[i];
        }
        return ans;
    }
};