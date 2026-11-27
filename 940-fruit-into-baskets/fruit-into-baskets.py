class Solution(object):
    def totalFruit(self, fruits):
        """
        :type fruits: List[int]
        :rtype: int
        """
        d={}
        l=0
        ans=0
        for i in range(len(fruits)):
            if fruits[i] in d:
                d[fruits[i]]+=1
            else:
                d[fruits[i]]=1
            while(len(d)>2):
                d[fruits[l]]-=1
                if(d[fruits[l]]==0):
                    del d[fruits[l]]
                l+=1
            ans=max(ans,i-l+1)
        return ans
            
        