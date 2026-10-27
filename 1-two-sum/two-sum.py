class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        d1={}
        for i in range(len(nums)):
            v=target-nums[i]
            if v in d1:
                return [i,d1[v]]
            else:
                d1[nums[i]]=i


