class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        """for i in range(len(nums)):
            nums[i]=nums[i]**2
        nums.sort()
        return nums
        """
        for i in range(len(nums)):
            nums[i]=nums[i]**2
        m=len(nums)-1
        ans=[0]*len(nums)
        k=m
        l=0
        r=(len(nums))-1
        while(l<=r):
            if(nums[l]<nums[r]):
                ans[k]=nums[r]
                r-=1
                k-=1
            else:
                ans[k]=nums[l]
                l+=1
                k-=1
        return ans
                

           
        

        