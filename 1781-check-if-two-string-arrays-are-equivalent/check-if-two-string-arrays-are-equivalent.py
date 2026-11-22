class Solution(object):
    def arrayStringsAreEqual(self, word1, word2):
        """
        :type word1: List[str]
        :type word2: List[str]
        :rtype: bool
        """
        s1=""
        s2=""
        for i in range(len(word1)):
            s1+=word1[i]
        for j in range(len(word2)):
            s2+=word2[j]
        if(s1==s2):
            return True
        else:
            return False
        