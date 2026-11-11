class Solution(object):
    def singleNonDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        d={}
        for i in range(len(nums)):
            if nums[i] in d:
                d[nums[i]]+=1
            else:
                d[nums[i]]=1
        ans=0
        for key,values in d.items():
            if(values==1):
                ans=key
        return ans
        