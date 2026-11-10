class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        a=list(s)
        i=0
        j=len(s)-1
        while(i<=j):
            if(a[i].lower()  in "aeiou" and a[j].lower() in "aeiou"):
                a[i],a[j]=a[j],a[i]
                i+=1
                j-=1
            elif(a[i].lower() not in "aeiou" and a[j].lower() in "aeiou"):
                i+=1
            else:
                j-=1
        return "".join(a)
        