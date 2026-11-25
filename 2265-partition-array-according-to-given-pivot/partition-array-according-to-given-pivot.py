class Solution(object):
    def pivotArray(self, nums, pivot):
        """
        :type nums: List[int]
        :type pivot: int
        :rtype: List[int]
        """
        ans=[0]*len(nums)
        cs=0
        cb=0
        ce=0
        for i in range(len(nums)):
            if(nums[i]<pivot):
                cs+=1
            elif(nums[i]>pivot):
                cb+=1
            else:
                ce+=1
        l=0
        for i in range(len(nums)):
            if(nums[i]<pivot):
                ans[l]=nums[i]
                l+=1
        p=l
        while(ce>0):
            ans[p]=pivot
            ce-=1
            p+=1
        r=p
        for i in range(len(nums)):
            if(nums[i]>pivot):
                ans[p]=nums[i]
                p+=1
        return ans        