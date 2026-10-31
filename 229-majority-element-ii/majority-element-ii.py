class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        d1={}
        ans=[]
        for i in range(len(nums)):
            if nums[i] in d1:
                d1[nums[i]]+=1
            else:
                d1[nums[i]]=1
        t=len(nums)//3
        for key,values in d1.items():
            if values>t:
                ans.append(key)
        return ans

        