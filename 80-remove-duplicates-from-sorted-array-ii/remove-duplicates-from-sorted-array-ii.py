class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        i=0
        j=0
        while(j<len(nums)):
            if i<2 or nums[j]!=nums[i-2]:
                nums[i]=nums[j]
                i+=1
            j+=1
        return i
                   
            
            
        