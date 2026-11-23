class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        if(x<=1):
            return x
        s=1
        e=x//2
        ans=0
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
        