class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        can=0
        c=0
        for i in range(len(nums)):
            if(c==0):
                can=nums[i]
                c+=1
            elif(can==nums[i]):
                c+=1
            else:
                c-=1
        return can
        