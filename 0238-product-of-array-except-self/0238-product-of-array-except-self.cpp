class Solution {
public:
    vector<int> prefix_product(int n, vector<int>&nums){
        int product=1;
        vector<int> res(n);
        for(int i=0;i<n;i++){
            res[i]=product;
            product*=nums[i];
        }
        return res;
    }
    vector<int> suffix_product(int n, vector<int> &nums){
        int product=1;
        vector<int> res(n);
        for(int i=n-1;i>=0;i--){
            res[i]=product;
            product*=nums[i];
        }
        return res;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix= prefix_product(n,nums);
        vector<int> suffix=suffix_product(n,nums);
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=prefix[i]*suffix[i];

        }
        return ans;
    }
};