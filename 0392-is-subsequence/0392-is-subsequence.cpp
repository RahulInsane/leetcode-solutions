class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        int n = s.size();
        for (int i = 0; i < t.size(); i++) {
            if (j < n && s[j] == t[i])
                j++;
            if (j == n)
                return true;
        }
        return j == n;
    }
};