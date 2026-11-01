class Solution(object):
    def mostWordsFound(self, sentences):
        """
        :type sentences: List[str]
        :rtype: int
        """
        maxi=0
        for i in range(len(sentences)):
            v=len(sentences[i].split())
            if(v>maxi):
                maxi=v
        return maxi

        