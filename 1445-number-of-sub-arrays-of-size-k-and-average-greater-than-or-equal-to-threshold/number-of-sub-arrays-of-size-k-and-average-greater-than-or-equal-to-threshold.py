class Solution(object):
    def numOfSubarrays(self, arr, k, threshold):
        """
        :type arr: List[int]
        :type k: int
        :type threshold: int
        :rtype: int
        """
        currsum=0
        count=0
        for i in range(k):
            currsum+=arr[i]
        avg=currsum//k
        if(avg>=threshold):
            count+=1
        l=0
        r=k
        while(r<len(arr)):
            currsum-=arr[l]
            l+=1
            currsum+=arr[r]
            r+=1
            average=currsum//k
            if(average>=threshold):
                count+=1
        return count

        
        