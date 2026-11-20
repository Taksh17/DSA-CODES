class Solution(object):
    def maximumCandies(self, candies, k):
        """
        :type candies: List[int]
        :type k: int
        :rtype: int
        """
        s=1
        e=max(candies)
        ans=0
        while(s<=e):
            m=s+(e-s)//2
            total=0
            for i in range(len(candies)):
                total+=candies[i]//m
            if(total>=k):
                ans=m
                s=m+1
            else:
                e=m-1
        return ans
        