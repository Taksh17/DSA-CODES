class Solution(object):
    def shipWithinDays(self, weights, days):
        """
        :type weights: List[int]
        :type days: int
        :rtype: int
        """
        s=max(weights)
        e=sum(weights)
        while(s<e):
            m=s+(e-s)//2
            total=0
            d=1
            for i in range(len(weights)):
                if(total+weights[i]>m):
                    total=weights[i]
                    d+=1
                else:
                    total+=weights[i]
            if(d>days):
                s=m+1
            else:
                e=m
        return e
            
        