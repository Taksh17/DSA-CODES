class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        d1={}
        for i in range(len(nums)):
            if nums[i] in d1:
                d1[nums[i]]+=1
            else:
                d1[nums[i]]=1
        a=sorted(d1,key=lambda x:d1[x],reverse=True)
        return a[:k]
        