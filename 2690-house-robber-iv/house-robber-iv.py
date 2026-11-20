class Solution(object):
    def minCapability(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        s=1
        e=max(nums)
        ans=0
        while(s<=e):
            m=s+(e-s)//2
            total=0
            i=0
            while(i<len(nums)):
                if(nums[i]<=m):
                    total+=1
                    i+=2
                else:
                    i+=1
            if(total>=k):
                ans=m
                e=m-1
            else:
                s=m+1
        return ans

        