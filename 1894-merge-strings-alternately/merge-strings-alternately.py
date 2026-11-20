class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        s=0
        f=0
        ans=""
        while(s<len(word1) and f<len(word2)):
            ans+=word1[s]
            s+=1
            ans+=word2[f]
            f+=1
        while(s<len(word1)):
            ans+=word1[s]
            s+=1
        while(f<len(word2)):
            ans+=word2[f]
            f+=1
        return ans
        