class Solution(object):
    def longestOnes(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        ans=0
        zc=0
        l=0
        for i in range(len(nums)):
            if(nums[i]==0):
                zc+=1
            while(zc>k):
                if(nums[l]==0):
                    zc-=1
                l+=1
            ans=max(ans,i-l+1)
        return ans



        