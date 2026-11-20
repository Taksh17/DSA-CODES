class Solution(object):
    def minimizeMax(self, nums, p):
        """
        :type nums: List[int]
        :type p: int
        :rtype: int
        """
        nums.sort()
        s=0
        e=max(nums)-min(nums)
        ans=0
        while(s<=e):
            m=s+(e-s)//2
            count=0
            i=0
            while(i<len(nums)-1):
                if(nums[i+1]-nums[i]<=m):
                    count+=1
                    i+=2
                else:
                    i+=1
            if(count>=p):
                ans=m
                e=m-1
            else:
                s=m+1
        return ans



        