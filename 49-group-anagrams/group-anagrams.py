class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        d1={}
        for i in range(len(strs)):
            v=''.join(sorted(strs[i]))
            if v in d1:
                d1[v].append(strs[i])
            else:
                d1[v]=[strs[i]]
        return d1.values()
        