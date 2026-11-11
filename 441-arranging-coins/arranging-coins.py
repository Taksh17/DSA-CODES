class Solution(object):
    def arrangeCoins(self, n):
        """
        :type n: int
        :rtype: int
        """
        r=1
        c=n
        while(c>=r):
            c-=r
            r+=1
        return r-1

        