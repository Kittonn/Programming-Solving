class Solution(object):
    def myPow(self, x, n):
        import math
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        ans = int('{:.5f}'.format(math.pow(x,n)))
        return ans
        