class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int rsum=0;
        for(int i=0;i<=k-1;i++){
            lsum+=cardPoints[i];
        }
        int maxsum=lsum;
        int n=cardPoints.size();
        int right=n-1;
        for(int i=k-1;i>=0;i--){
            lsum-=cardPoints[i];
            rsum+=cardPoints[right];
            right--;
            maxsum=max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};