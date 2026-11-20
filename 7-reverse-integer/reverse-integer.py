class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        sign=1
        if(x<0):
            sign=-sign
            x=x*-1
        a=0
        while(x>0):
            d=x%10
            a=a*10+d
            x=x//10
        if(a<-(2**31) or a> 2**31-1):
            return 0
        else:
            return a*sign
        