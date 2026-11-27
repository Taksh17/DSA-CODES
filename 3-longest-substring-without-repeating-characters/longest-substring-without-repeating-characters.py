class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        ans=0
        l=0
        d={}
        for i in range(len(s)):
            if (s[i]) in d:
                d[s[i]]+=1
            else:
                d[s[i]]=1
            while(d[s[i]]>1):
                d[s[l]]-=1
                l+=1
            ans=max(ans,i-l+1)
        return ans
        