class Solution(object):
    def sortArrayByParity(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans=[0]*len(nums)
        l=0
        r=len(nums)-1
        for i in range(len(nums)):
            if(nums[i]%2==0):
                ans[l]=nums[i]
                l+=1
            else:
                ans[r]=nums[i]
                r-=1
        return ans
        