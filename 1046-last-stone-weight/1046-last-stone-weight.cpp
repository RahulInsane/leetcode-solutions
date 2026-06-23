class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>maxh;
        for(int i=0;i<stones.size();i++){
            maxh.push(stones[i]);
        }
        while(maxh.size()>=2){
            int first=maxh.top();
            maxh.pop();
            int second=maxh.top();
            maxh.pop();
            if(first!=second){
                maxh.push(abs(first-second));
            }
        }
        if(maxh.size()) return maxh.top();
        else return 0;
    }
};