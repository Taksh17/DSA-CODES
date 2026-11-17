class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        d={}
        for i in range(len(nums)):
            if(nums[i]) in d:
                d[nums[i]]+=1
            else:
                d[nums[i]]=1
        d=sorted(d,key=lambda x :d[x],reverse=True)
        return d[:k]
        