class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """
        l=0
        mini=float('inf')
        currsum=0
        for i in range(len(nums)):
            currsum+=nums[i]
            while(currsum>=target):
                mini=min(mini,i-l+1)
                currsum-=nums[l]
                l+=1
        if(mini==float('inf')):
            return 0
        return mini
        