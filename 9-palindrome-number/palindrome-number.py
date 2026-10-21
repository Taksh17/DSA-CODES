class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """ 
        test=x
        if x<0:
            return False
            
        final=0
        while(test>0):
            digit=test%10
            final=final*10+digit
            test=test//10
        if(final==x):
            return True
        else:
            return False
        