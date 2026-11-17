class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        d={}
        for i in range(len(nums)):
            v=target-nums[i]
            if v in d:
                return [i,d[v]]
            else:
                d[nums[i]]=i
