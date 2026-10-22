class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        list1=[]
        length=len(nums)
        sum=0
        for i in range(length):
            sum+=nums[i]
            list1.append(sum)
        return list1
            