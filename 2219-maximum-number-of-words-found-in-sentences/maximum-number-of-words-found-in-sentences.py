class Solution(object):
    def mostWordsFound(self, sentences):
        """
        :type sentences: List[str]
        :rtype: int
        """
        count=0
        maxi=0
        l=len(sentences)
        for i in range(l):
            count=len(sentences[i].split())
            if count>maxi:
                maxi=count
        return maxi
       
          