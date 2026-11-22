class Solution(object):
    def findContentChildren(self, g, s):
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        s.sort() #cookie size
        g.sort() #each child capacity
        i=0 #cookie
        j=0 #child
        count=0
        while(i<len(s) and j<len(g)):
            if(s[i]>=g[j]):
                count+=1
                i+=1
                j+=1
            else:
                i+=1
        return count
        