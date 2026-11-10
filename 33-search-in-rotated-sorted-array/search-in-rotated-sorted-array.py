class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        s=0
        e=len(nums)-1
        while(s<=e):
            m=s+(e-s)//2
            if(nums[m]==target):
                return m
            elif(nums[s]<=nums[m]):
                if(nums[s]<=target and target<=nums[m]):
                    e=m-1
                else:
                    s=m+1
            else:
                if(target>=nums[m] and target<=nums[e]):
                    s=m+1
                else:
                    e=m-1
        return -1
        