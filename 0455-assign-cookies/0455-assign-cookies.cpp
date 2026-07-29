class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
         int n= g.size();
    int m=s.size();
    int left=0,right=0;
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    while(left<m && right<n){
        if(s[left]>=g[right])right++;
        left++;
    }
    return right;

    }
};