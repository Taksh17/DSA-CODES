class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        l=len(candies)
        maxi=0
        ans=[]
        for i in range(l):
            if(candies[i]>maxi):
                maxi=candies[i]
        for j in range(l):
            var=candies[j]+extraCandies
            if(var>=maxi):
                ans.append(True)
            else:
                ans.append(False)
        return ans