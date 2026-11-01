class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        d1={}
        for i in range(len(nums)):
            if nums[i] in d1:
                d1[nums[i]]+=1
            else:
                d1[nums[i]]=1
        for key,values in d1.items():
            if values>1:
                return True
        return False
        