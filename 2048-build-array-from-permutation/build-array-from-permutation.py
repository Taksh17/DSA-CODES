class Solution(object):
    def buildArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        value=0
        ans=[]
        for i in nums:
            value=nums[i]
            ans.append(value)
        return ans

        