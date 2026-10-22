class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        maxsum=0
        len1=len(accounts)
        for i in range(len1):
            sum=0
            for j in range(len(accounts[i])):
                sum+=accounts[i][j]
                if sum>maxsum:
                    maxsum=sum
        return maxsum
        