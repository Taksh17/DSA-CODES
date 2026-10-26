class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        s=0
        l=len(nums)
        e=l-1
        while(s<=e):
            m=s+(e-s)//2
            if(nums[m]==target):
                return m
            elif(target>nums[m]):
                s=m+1
            else:
                e=m-1
        return s
        