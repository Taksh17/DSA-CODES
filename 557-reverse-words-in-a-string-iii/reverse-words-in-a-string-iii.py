class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        s=s.split()
        ans=[]
        for i in range(len(s)):
            v=s[i][::-1]
            ans.append(v)
        return " ".join(ans)

        
        