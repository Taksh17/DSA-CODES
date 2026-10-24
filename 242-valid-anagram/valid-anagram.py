class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        d1={}
        d2={}
        for i in range(len(s)):
            if s[i] in d1:
                d1[s[i]]+=1
            else:
                d1[s[i]]=1
        for j in range(len(t)):
            if t[j] in d2:
                d2[t[j]]+=1
            else:
                d2[t[j]]=1
        if(d1==d2):
            return True
        else:
            return False