class Solution {
public:
    void do_reverse(int i, int j, vector<int>&temp){
        while(i<=j){
            swap(temp[i],temp[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        do_reverse(0,n-1,nums);
        do_reverse(0,k-1,nums);
        do_reverse(k,n-1,nums);
        
    }
};