class Solution(object):
    def addSpaces(self, s, spaces):
        """
        :type s: str
        :type spaces: List[int]
        :rtype: str
        """
        ans=[]
        i=0
        j=0
        while(i<len(s) and j<len(spaces)):
            if(i!=spaces[j]):
                ans.append(s[i])
                i+=1
            else:
                ans.append(" ")
                j+=1
                ans.append(s[i])
                i+=1
        while(i<len(s)):
            ans.append(s[i])
            i+=1
        return "".join(ans)
        