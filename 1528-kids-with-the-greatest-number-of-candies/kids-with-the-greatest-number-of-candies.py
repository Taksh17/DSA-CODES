class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        ans=[]
        l=len(candies)
        maxi=candies[0]
        for i in range(0,l):
            if(candies[i]>maxi):
                maxi=candies[i]
        
        var=0
        for j in range(0,l):
            var=candies[j]+extraCandies
            if(var>=maxi):
                ans.append(True)
            else:
                ans.append(False)
        return ans
        