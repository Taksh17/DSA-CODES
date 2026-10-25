class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        d1={}
        for i in strs:
            s=''.join(sorted(i))
            if s in d1:
                d1[s].append(i)
            else:
                d1[s]=[i]
        return list(d1.values())
        

        
        