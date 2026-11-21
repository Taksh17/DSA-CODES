class Solution(object):
    def minimizedMaximum(self, n, quantities):
        """
        :type n: int
        :type quantities: List[int]
        :rtype: int
        """
        s=1
        e=max(quantities)
        ans=e
        while(s<=e):
            m=s+(e-s)//2
            total=0
            for i in range(len(quantities)):
                if(quantities[i]%m==0):
                    total+=quantities[i]//m
                else:
                    total+=quantities[i]//m+1
            if(total<=n):
                ans=m
                e=m-1
            else:
                s=m+1
        return ans

        