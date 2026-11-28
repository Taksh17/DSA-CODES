class Solution(object):
    def minimumRecolors(self, blocks, k):
        """
        :type blocks: str
        :type k: int
        :rtype: int
        """
        opcount=0
        minop=float('inf')
        for i in range(k):
            if(blocks[i]=='W'):
                opcount+=1
        minop=min(minop,opcount)
        l=0
        r=k
        while(r<len(blocks)):
            if(blocks[l]=='W'):
                opcount-=1
            l+=1
            if(blocks[r]=='W'):
                opcount+=1
            r+=1
            minop=min(minop,opcount)
        return minop       