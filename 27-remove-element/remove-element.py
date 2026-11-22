class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        s=0
        f=0
        while(f<len(nums)):
            if(nums[f]==val):
                f+=1
            else:
                nums[s],nums[f]=nums[f],nums[s]
                s+=1
                f+=1
        return s