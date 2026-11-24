class Solution(object):
    def backspaceCompare(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        l1=list(s)
        l2=list(t)
        i=0
        j=0
        while(i<len(l1)):
            if(l1[i]=='#'):
                if(i>0):
                    l1.pop(i-1)
                    l1.pop(i-1)
                    i-=1
                else:
                    l1.pop(i)
            else:
                i+=1
        while(j<len(l2)):
            if(l2[j]=="#"):
                if(j>0):
                    l2.pop(j-1)
                    l2.pop(j-1)
                    j-=1
                else:
                    l2.pop(j)
            else:
                j+=1
        return l1==l2