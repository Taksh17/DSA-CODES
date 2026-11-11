class Solution(object):
    def isPerfectSquare(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if(num<2):
            return True
        s=1
        e=num//2
        while(s<=e):
            m=s+(e-s)//2
            if(m*m==num):
                return True
            elif(m*m>num):
                e=m-1
            else:
                s=m+1
        return False
        