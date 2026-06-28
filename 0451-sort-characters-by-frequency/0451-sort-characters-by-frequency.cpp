class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> maxh;
        unordered_map<char,int>mpp;
        string res="";
        for(int i=0;i<s.size();i++) mpp[s[i]]++;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            maxh.push({it->second,it->first});
        }
        while(!maxh.empty()){
            char el=maxh.top().second;
            int freq= maxh.top().first;
            for(int i=1;i<=freq;i++) res+=el;
            maxh.pop();
        }
        return res;
    }
};