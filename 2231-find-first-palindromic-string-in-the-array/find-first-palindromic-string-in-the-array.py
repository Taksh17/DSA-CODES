class Solution(object):
    def firstPalindrome(self, words):
        """
        :type words: List[str]
        :rtype: str
        """
        for i in range(len(words)):
            v=words[i]
            s=0
            f=len(v)-1
            while(s<f):
                if(v[s]!=v[f]):
                    break
                s+=1
                f-=1
            if(s>=f):
                return words[i]
        return ""
        