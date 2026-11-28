class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        d={}
        sub=0
        ans=False
        for i in range(len(nums)):
            if(nums[i]) in d:
                sub=abs(d[nums[i]]-i)
                d[nums[i]]=i
                if(sub<=k):
                    ans=True
            else:
                d[nums[i]]=i
        return ans

        