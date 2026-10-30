class Solution(object):
    def validPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        def ispalindrome(s,l,r):
            while(l<r):
                if(s[l]!=s[r]):
                    return False
                l+=1
                r-=1
            return True
        l=0
        r=len(s)-1
        while(l<r):
            if(s[l]==s[r]):
                l+=1
                r-=1
            else:
                return ispalindrome(s,l+1,r) or ispalindrome(s,l,r-1)
        return True