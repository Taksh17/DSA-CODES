class Solution(object):
    def shipWithinDays(self, weights, days):
        """
        :type weights: List[int]
        :type days: int
        :rtype: int
        """
        l=max(weights)
        r=sum(weights)
        while(l<r):
            m=l+(r-l)//2
            total=0
            day=1
            for i in range(len(weights)):
                if(total+weights[i]>m):
                    day+=1
                    total=weights[i]
                else:
                    total+=weights[i]
            if(day>days):
                l=m+1
            else:
                r=m
        return r


        