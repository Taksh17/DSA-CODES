class Solution(object):
    def findContentChildren(self, g, s):
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        g.sort() #child capacity
        s.sort() #size of cookie
        i=0 #child
        j=0 #cookie
        count=0
        while(i<len(g) and j<len(s)):
            if(s[j]>=g[i]):
                i+=1
                j+=1
                count+=1
            else:
                j+=1
        return count
                


        