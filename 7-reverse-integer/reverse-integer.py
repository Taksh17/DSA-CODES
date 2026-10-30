class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        sign=1
        if(x<0):
            sign=-1
            x=-x
        ans=0
        while(x>0):
            d=x%10
            ans=ans*10+d
            x=x//10
        if(ans>2**31-1) or (ans<-2**31):
            return 0
        else:
            return ans*sign