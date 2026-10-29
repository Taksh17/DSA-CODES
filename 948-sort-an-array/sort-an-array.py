class Solution(object):
    def sortArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        def mergesort(nums):
            if len(nums) <= 1:
                return nums
            mid = len(nums) // 2
            left = mergesort(nums[:mid])
            right = mergesort(nums[mid:])
            ans = []
            i = 0
            j = 0
            while i < len(left) and j < len(right):
                if left[i] <= right[j]:
                    ans.append(left[i])
                    i += 1
                else:
                    ans.append(right[j])
                    j += 1

            while i < len(left):
                ans.append(left[i])
                i += 1

            while j < len(right):
                ans.append(right[j])
                j += 1

            return ans

        return mergesort(nums)
        