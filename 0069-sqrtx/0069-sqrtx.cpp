class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        int high=x;
        int low=1;
        while(low<=high){
            if(x==0) return 0;
            int mid=low+(high-low)/2;
            if(mid<=x/mid){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
};