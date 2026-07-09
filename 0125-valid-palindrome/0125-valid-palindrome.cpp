class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }
        return checkPalindrome(0, cleaned);
    }

private:
    bool checkPalindrome(int i, string& str) {
        if (i >= str.length() / 2) return true;
        if (str[i] != str[str.length() - i - 1]) return false;
        return checkPalindrome(i + 1, str);
    }
};
