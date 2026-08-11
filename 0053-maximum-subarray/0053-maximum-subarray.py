class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        sum=0
        maxsum=0
        start=-1
        ans_start=-1
        ans_end=-1
        maxsum=float("-inf")
        for i in range(len(nums)):
            if(sum==0):
                start=i
            sum+=nums[i]
            if(sum>maxsum):
                maxsum=sum
                ans_start=start
                ans_end=i
            if sum<0:
                sum=0
        return maxsum   