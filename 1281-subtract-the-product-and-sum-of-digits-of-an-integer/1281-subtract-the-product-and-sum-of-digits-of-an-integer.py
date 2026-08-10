class Solution(object):
    def subtractProductAndSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        sum=0
        product=1
        while(n):
            rem=n%10
            sum+=rem
            product*=rem
            n/=10
        return product-sum