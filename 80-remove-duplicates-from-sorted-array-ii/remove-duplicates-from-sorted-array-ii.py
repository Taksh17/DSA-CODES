class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if(len(nums)<=2):
            return len(nums)
        s=1
        f=2
        while(f<len(nums)):
            if(nums[f]==nums[s-1]):
                f+=1
            else:
                s+=1
                nums[s]=nums[f]
                f+=1
        return s+1
        