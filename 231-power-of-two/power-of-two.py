class Solution(object):
    def isPowerOfTwo(self, n):

        """
        :type n: int
        :rtype: bool
        """
        i=0
        while(2**i<=n):
            if(2**i==n):
                return True
            else:
                i+=1
        return False
         