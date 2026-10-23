class Solution(object):
    def numIdenticalPairs(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count=0
        l=len(nums)
        i=0
        j=1
        while(i<l):
            while(j<l):
                if(nums[i]==nums[j]):
                    count+=1
                j+=1
            i+=1
            j=i+1
        return count