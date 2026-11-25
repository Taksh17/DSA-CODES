class Solution(object):
    def findAnagrams(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """
        if(len(s)<len(p)):
            return []
        ans=[]
        d1={}
        m=0
        for i in range(len(p)):
            if p[i] in d1:
                d1[p[i]]+=1
            else:
                d1[p[i]]=1
        d2={}
        for i in range(len(p)):
            if s[i] in d2:
                d2[s[i]]+=1
            else:
                d2[s[i]]=1
        if (d1==d2):
            ans.append(m)  
        a=0
        b=len(p)
        while(b<len(s)):
            d2[s[a]]-=1
            if(d2[s[a]]==0):
                del d2[s[a]]
            a+=1
            if s[b] in d2:
                d2[s[b]]+=1
            else:
                d2[s[b]]=1
            b+=1
            if(d1==d2):
                ans.append(a)
        return ans            