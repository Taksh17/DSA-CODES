class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        d1={}
        c=0
        for i in range(len(nums)):
            c=target-nums[i]
            if c in d1:
                return[i,d1[c]]
            else:
                d1[nums[i]]=i
        return d1        