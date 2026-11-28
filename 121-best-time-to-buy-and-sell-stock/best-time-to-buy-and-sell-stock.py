class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        minprice=prices[0]
        maxprofit=0
        for i in range(1,len(prices)):
            if(prices[i]<minprice):
                minprice=prices[i]
            maxprofit=max(maxprofit,prices[i]-minprice)
        return maxprofit
        