class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        l=len(nums)
        if(l==1):
            return nums
        i=0
        j=0
        while(i<l):
            if(nums[i]!=0):
                nums[j]=nums[i]
                j+=1
            i+=1
        while(j<l):
            nums[j]=0
            j+=1
        return nums
