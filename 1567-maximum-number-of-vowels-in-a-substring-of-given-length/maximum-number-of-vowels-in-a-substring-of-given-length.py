class Solution(object):
    def maxVowels(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        v=0
        l=[]
        for i in range(k):
            l.append(s[i])
        for i in range(len(l)):
            if(l[i]in "aeiou"):
                v+=1
        maxv=v
        z=k
        while(z<len(s)):
            if(l[0]) in "aeiou":
                v-=1
            l.pop(0)
            if(s[z] in "aeiou"):
                v+=1
            l.append(s[z])
            z+=1
            maxv=max(maxv,v)
        return maxv


        