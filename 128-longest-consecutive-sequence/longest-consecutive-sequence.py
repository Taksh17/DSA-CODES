class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        a=set(nums)
        longest=0
        for i in a:
            if i-1 not in a:
                current=i
                count=1
                while current +1 in a:
                    current+=1
                    count+=1
                longest=max(longest,count)
        return longest


       
        