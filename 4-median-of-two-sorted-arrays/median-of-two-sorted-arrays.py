class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        ans=[]
        i=0
        j=0
        while(i<len(nums1) and j<len(nums2)):
            if(nums1[i]<nums2[j]):
                ans.append(nums1[i])
                i+=1
            else:
                ans.append(nums2[j])
                j+=1
        while(i<len(nums1)):
            ans.append(nums1[i])
            i+=1
        while(j<len(nums2)):
            ans.append(nums2[j])
            j+=1
        l=len(ans)
        median=0
        if (l%2==0):
            median=(ans[l//2-1]+ans[l//2])/2.0
        else:
            median=float(ans[l//2])
        return median