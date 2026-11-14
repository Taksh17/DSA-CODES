class Solution(object):
    def successfulPairs(self, spells, potions, success):
        """
        :type spells: List[int]
        :type potions: List[int]
        :type success: int
        :rtype: List[int]
        """
        potions.sort()
        r=[]
        for i in range(len(spells)):
            s=0
            e=len(potions)-1
            ans=len(potions)
            while(s<=e):
                m=s+(e-s)//2
                if(spells[i]*potions[m]>=success):
                    ans=m
                    e=m-1
                else:
                    s=m+1
            r.append(len(potions) - ans)
        return r



        

        

            


        