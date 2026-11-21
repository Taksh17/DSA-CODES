class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        maxi=candies[0]
        for i in range(len(candies)):
            if(candies[i]>maxi):
                maxi=candies[i]
        ans=[]
        for i in range(len(candies)):
            v=candies[i]+extraCandies
            if(v>=maxi):
                ans.append(True)
            else:
                ans.append(False)
        return ans
