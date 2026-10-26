class Solution(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        zc=0
        oc=0
        tc=0
        for i in nums:
            if i==0:
                zc+=1
            elif i==1:
                oc+=1
            else:
                tc+=1
        del nums[:]
        while(zc>0):
            nums.append(0)
            zc-=1
        while(oc>0):
            nums.append(1)
            oc-=1
        while(tc>0):
            nums.append(2)
            tc-=1