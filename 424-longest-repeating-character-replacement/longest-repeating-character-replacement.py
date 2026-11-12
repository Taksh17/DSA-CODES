class Solution(object):
    def characterReplacement(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        d = {}
        l = 0
        maxi = 0
        ans = 0

        for r in range(len(s)):
            d[s[r]] = d.get(s[r], 0) + 1

            maxi = max(maxi, d[s[r]])

            while (r - l + 1) - maxi > k:
                d[s[l]] -= 1
                l += 1

            ans = max(ans, r - l + 1)

        return ans
        