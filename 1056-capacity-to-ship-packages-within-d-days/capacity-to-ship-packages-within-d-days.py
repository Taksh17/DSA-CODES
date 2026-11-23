class Solution(object):
    def shipWithinDays(self, weights, days):
        """
        :type weights: List[int]
        :type days: int
        :rtype: int
        """
        s=max(weights)
        e=sum(weights)
        ans=0
        while(s<=e):
            m=s+(e-s)//2
            d=1
            total=0
            for i in range(len(weights)):
                if(total+weights[i]>m):
                    total=weights[i]
                    d+=1
                else:
                    total+=weights[i]
            if(d>days):
                s=m+1
            else:
                ans=m
                e=m-1
        return ans

                
        