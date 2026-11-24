class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        d={}
        for i in range(len(strs)):
            v=sorted(strs[i])
            p="".join(v)
            if(p) in d:
                d[p].append(strs[i])
            else:
                d[p]=[strs[i]]  
        return d.values()     