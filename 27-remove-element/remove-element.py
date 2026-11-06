class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        i=0
        j=0
        while(i<len(nums)):
            if(nums[i]==val):
                i+=1
            else:
                nums[j],nums[i]=nums[i],nums[j]
                i+=1
                j+=1
        return j
        