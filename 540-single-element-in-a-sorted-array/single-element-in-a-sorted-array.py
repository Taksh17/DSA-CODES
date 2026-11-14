class Solution(object):
    def singleNonDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        s=0
        e=len(nums)-1
        while(s<e):
            m=s+(e-s)//2
            if(m%2==0 and nums[m]==nums[m+1]):
                s=m+2
            elif(m%2==0 and nums[m]!=nums[m+1]):
                e=m
            elif(m%2==1 and nums[m]==nums[m-1]):
                s=m+1
            else:
                e=m
        return nums[e]


        