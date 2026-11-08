class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        l=len(matrix)
        c=len(matrix[0])
        s=0
        e=l*c-1
        while(s<=e):
            m=s+(e-s)//2
            row=m//c
            col=m%c
            if(matrix[row][col]==target):
                return True
            elif(matrix[row][col]>target):
                e=m-1
            else:
                s=m+1
        return False
        