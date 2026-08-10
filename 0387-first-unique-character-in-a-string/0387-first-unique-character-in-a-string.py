class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        n=len(s)
        mpp={}
        for i in range (n):
            mpp[s[i]]=mpp.get(s[i],0)+1
        for i in range(n):
            if mpp[s[i]]==1:
                return i
        return -1