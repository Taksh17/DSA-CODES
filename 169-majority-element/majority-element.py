class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        candidate=0
        c=0
        for i in range(len(nums)):
            if(c==0):
                candidate=nums[i]
            if(nums[i]==candidate):
                c+=1
            else:
                c-=1
        return candidate

        