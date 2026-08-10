class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        unordered_map<char,int> st;
        for(int i=0;i<n;i++){
            st[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(st[s[i]]==1) return i;
        }
        return -1;
    }
};