class Solution(object):
    def minEatingSpeed(self, piles, h):
        """
        :type piles: List[int]
        :type h: int
        :rtype: int
        """
        l=1
        r=max(piles)
        ans=0
        while(l<r):
            m=l+(r-l)//2
            total=0
            for i in range(len(piles)):
               if(piles[i]%m==0):
                hrs=piles[i]//m
               else:
                hrs=piles[i]//m+1
               total+=hrs            
            if(total>h):
                l=m+1
            else:
                r=m
        return r


           

            
        