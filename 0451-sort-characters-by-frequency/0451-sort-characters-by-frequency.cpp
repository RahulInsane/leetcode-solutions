class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        int freq[256]={0};
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        vector<pair<int,char>> v;
        for(int i=0;i<256;i++){
            if(freq[i]>0) v.push_back({freq[i],char(i)});

        }
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        for(int i=0;i<v.size();i++){
            int count=v[i].first;
            char ch=v[i].second;
            while(count>0){
                ans+=ch;
                count--;
            }
        }
        return ans;
    }
};