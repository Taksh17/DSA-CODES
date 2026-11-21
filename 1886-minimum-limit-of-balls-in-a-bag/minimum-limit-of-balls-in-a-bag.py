class Solution(object):
    def minimumSize(self, nums, maxOperations):
        """
        :type nums: List[int]
        :type maxOperations: int
        :rtype: int
        """
        s=1
        e=max(nums)
        ans=e
        while(s<=e):
            m=s+(e-s)//2
            total=0
            for i in range(len(nums)):
                total+=(nums[i]-1)//m
            if (total<=maxOperations):
                ans=m
                e=m-1
            else:
                s=m+1
        return ans

        