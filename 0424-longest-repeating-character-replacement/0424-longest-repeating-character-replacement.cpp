class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        vector<int>freq(26,0);
        int maxfreq=0;
        int ans=0;
        int n=s.size();
        for(int r=0;r<n;r++){
            freq[s[r]-'A']++;
            maxfreq=max(maxfreq,freq[s[r]-'A']);
            int window_size=r-l+1;
            if(window_size-maxfreq>k){
                freq[s[l]-'A']--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};