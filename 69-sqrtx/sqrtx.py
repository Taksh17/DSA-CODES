class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        s=0
        e=x//2
        ans=0
        if(x<2):
            return x
        while(s<=e):
            m=s+(e-s)//2
            if(m*m==x):
                return m
            elif(m*m>x):
                e=m-1
            else:
                ans=m
                s=m+1
        return ans

        