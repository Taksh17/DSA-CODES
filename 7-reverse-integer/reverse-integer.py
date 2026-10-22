class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        ans=0
        digit=0
        sign=1
        if x<0:
            sign=-1
            x=-x
        while(x>0):
            digit=x%10
            ans=ans*10+digit
            x=x//10
        if(ans>2**31-1 or ans<(-2**31)):
            return 0
        else:
            return ans*sign