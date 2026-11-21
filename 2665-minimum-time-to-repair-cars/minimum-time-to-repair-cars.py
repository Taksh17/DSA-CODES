class Solution(object):
    def repairCars(self, ranks, cars):
        """
        :type ranks: List[int]
        :type cars: int
        :rtype: int
        """
        s=1
        e=min(ranks)*cars*cars
        ans=0
        while(s<=e):
            m=s+(e-s)//2
            total=0
            for i in range(len(ranks)):
                total+=int(math.sqrt(m/ranks[i]))
            if(total>=cars):
                ans=m
                e=m-1
            else:
                s=m+1
        return ans    