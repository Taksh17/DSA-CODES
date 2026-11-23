class Solution(object):
    def minEatingSpeed(self, piles, h):
        """
        :type piles: List[int]
        :type h: int
        :rtype: int
        """
        s=1
        e=max(piles)
        ans=0
        while(s<=e):
            m=s+(e-s)//2
            total=0
            for i in range(len(piles)):
                if(piles[i]%m==0):
                    total+=piles[i]//m
                else:
                    total+=piles[i]//m+1
            if(total>h):
               s=m+1
            else:
                ans=m
                e=m-1
        return ans
