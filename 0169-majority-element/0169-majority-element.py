class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count=0
        n=len(nums)
        target=n/2
        element=-1
        for i in range(n):
            if count==0:
                count=1
                element=nums[i]
            elif nums[i]==element:
                count+=1
            else:
                count-=1
        

        count1=0
        for i in range(n):
            if nums[i]==element:
                count1+=1
        if count1>=target:
            return element
        return -1
        
        