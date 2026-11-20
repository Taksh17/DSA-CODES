class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        s=0
        f=0
        while(f<len(nums)):
            if(nums[s]==nums[f]):
                f+=1
            elif(nums[s]!=nums[f]):
                s+=1
                nums[s],nums[f]=nums[f],nums[s]
                f+=1
        return s+1

        