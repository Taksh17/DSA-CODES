class Solution(object):
    def getConcatenation(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans=[]
        l=len(nums)
        val=0
        for i in range(l):
            val=nums[i]
            ans.append(val)
        newvalue=0
        for j in range(l):
            newvalue=nums[j]
            ans.append(newvalue)
        return ans
        