class Solution(object):
    def applyOperations(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        s=0
        f=1
        while(f<len(nums)):
            if(nums[s]!=nums[f]):
                s+=1
                f+=1
            else:
                nums[s]=nums[s]*2
                nums[f]=0
                s+=1
                f+=1
        i=0
        for j in range(len(nums)):
            if(nums[j]!=0):
                nums[i]=nums[j]
                i+=1
        while(i<len(nums)):
            nums[i]=0
            i+=1
        return nums
        

