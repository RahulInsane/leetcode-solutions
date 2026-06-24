class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>maxh;
        int sum=0;
        for(int i=0;i<piles.size();i++){
            maxh.push(piles[i]);
            sum+=piles[i];
        }
        for(int i=1;i<=k;i++){
            int max_el= maxh.top();
            maxh.pop();
            int remove=max_el/2;
            sum-=remove;
            max_el-=remove;
            maxh.push(max_el);
        }
        return sum;
    }
};