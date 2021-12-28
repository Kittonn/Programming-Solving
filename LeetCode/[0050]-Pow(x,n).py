class Solution(object):
    def myPow(self, x, n):
        import math
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        ans = float('{:.5f}'.format(math.pow(x,n)))
        return ans