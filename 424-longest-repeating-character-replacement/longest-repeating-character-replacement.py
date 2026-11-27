class Solution(object):
    def characterReplacement(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        ans=0
        maxfreq=0
        d={}
        l=0
        for i in range(len(s)):
            if s[i] in d:
                d[s[i]]+=1
            else:
                d[s[i]]=1
            maxfreq=max(maxfreq,d[s[i]])
            while(i-l+1-maxfreq>k):
                d[s[l]]-=1
                l+=1
            ans=max(ans,i-l+1)
        return ans
        