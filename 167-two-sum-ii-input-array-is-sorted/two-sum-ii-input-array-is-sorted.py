class Solution(object):
    def twoSum(self, nums, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        l=0
        r=len(nums)-1
        while(l<r):
            sum=nums[l]+nums[r]
            if(sum==target):
                return [l+1,r+1]
            elif(sum>target):
                r-=1
            else:
                l+=1
        return []

        