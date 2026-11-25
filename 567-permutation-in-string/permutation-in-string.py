class Solution(object):
    def checkInclusion(self, s1, s2):
        """
        :type s1: str
        :type s2: str
        :rtype: bool
        """
        if(len(s1)>len(s2)):
            return False
        d1={}
        d2={}
        for i in range(len(s1)):
            if s1[i] in d1:
                d1[s1[i]]+=1
            else:
                d1[s1[i]]=1
        for i in range(len(s1)):
            if s2[i] in d2:
                d2[s2[i]]+=1
            else:
                d2[s2[i]]=1
        if(d1==d2):
            return True
        i=0
        j=len(s1)
        while(j<len(s2)):
            d2[s2[i]]-=1
            if(d2[s2[i]]==0):
                del d2[s2[i]]
            i+=1
            if s2[j] in d2:
                d2[s2[j]]+=1
            else:
                d2[s2[j]]=1
            j+=1
            if(d1==d2):
                return True
        return False

        