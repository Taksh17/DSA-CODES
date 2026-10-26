class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        l=len(nums)
        ans=0
        i=l//2
        ans=nums[i]
        return ans        