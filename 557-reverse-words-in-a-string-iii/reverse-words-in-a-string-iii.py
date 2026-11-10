class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        s=s.split()
        ans=""
        for i in range(len(s)):
            ans+=s[i][::-1]
            if(i!=len(s)-1):
                ans+=" "
        return ans

            


        