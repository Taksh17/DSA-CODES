class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        a={}
        for i in range(len(nums)):
            compliment=target-nums[i]
            if compliment in a:
                return[i,a[compliment]]
            else:
                a[nums[i]]=i